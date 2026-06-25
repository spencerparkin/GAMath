#include "GLCanvas.h"
#include "Object.h"
#include "Constraint.h"
#include "HappyMath/Matrix4x4.h"
#include "HappyMath/Rectangle.h"
#include <QColorDialog>
#include <qevent.h>
#include <qmenu.h>

GLCanvas::GLCanvas(QWidget* parent) : QOpenGLWidget(parent)
{
    this->dragDisposition = DragDisposition::NONE;
    this->distanceToSelectedObject = 0.0;

    this->cameraEyePos = HappyMath::Vector3(20.0, 20.0, 20.0);
    this->cameraLookAt = HappyMath::Vector3(0.0, 0.0, 0.0);

    this->setContextMenuPolicy(Qt::CustomContextMenu);

    this->connect(this, &QWidget::customContextMenuRequested, this, &GLCanvas::OnContextMenu);
}

void GLCanvas::AddObjectToScene(std::shared_ptr<Object> object)
{
    this->objectArray.push_back(object);
    this->update();
}

void GLCanvas::ClearScene()
{
    this->objectArray.clear();
    this->constraintArray.clear();
    this->update();
}

int GLCanvas::GetNumObjectsInScene()
{
    return (int)this->objectArray.size();
}

/*virtual*/ void GLCanvas::initializeGL()
{
    initializeOpenGLFunctions();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    this->drawer.Initialize();
}

/*virtual*/ void GLCanvas::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);
}

/*virtual*/ void GLCanvas::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    GLint viewportParams[4] = { 0, 0, 0, 0 };
    glGetIntegerv(GL_VIEWPORT, viewportParams);

    double aspectRatio = double(viewportParams[2]) / double(viewportParams[3]);

    this->frustum.SetFromAspectRatio(aspectRatio, M_PI / 3.0, 0.1, 1000.0);
    
    HappyMath::Matrix4x4 projMatrix;
    this->frustum.GetToProjectionMatrix(projMatrix);

    HappyMath::Matrix4x4 projMatrixT;
    projMatrixT.Transpose(projMatrix);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMultMatrixd(&projMatrixT.ele[0][0]);

    this->viewToWorld.SetAsViewToWorldTransform(this->cameraEyePos, this->cameraLookAt, HappyMath::Vector3(0.0, 1.0, 0.0));

    HappyMath::Matrix4x4 worldToView;
    worldToView.Invert(this->viewToWorld);

    HappyMath::Matrix4x4 worldToViewT;
    worldToViewT.Transpose(worldToView);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glMultMatrixd(&worldToViewT.ele[0][0]);

    glEnable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);

    glBegin(GL_LINES);

    glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(10.0f, 0.0f, 0.0f);

    glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 10.0f, 0.0f);

    glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 10.0f);

    glEnd();

    for (std::shared_ptr<Constraint> constraint : this->constraintArray)
        constraint->Enforce();

    // STPTODO: Draw all opaque objects first, then all transparent objects, back to front.
    for (std::shared_ptr<Object> object : this->objectArray)
        object->Draw(&this->drawer, this->IsSelected(object.get()));

    glFlush();
}

bool GLCanvas::IsSelected(Object* object)
{
    for (std::shared_ptr<Object> selectedObject : this->selectedObjectArray)
        if (selectedObject.get() == object)
            return true;

    return false;
}

const std::vector<std::shared_ptr<Object>>& GLCanvas::GetSelectedObjects() const
{
    return this->selectedObjectArray;
}

void GLCanvas::ToggleSelectionOfObject(std::shared_ptr<Object> object)
{
    for (int i = 0; i < (int)this->selectedObjectArray.size(); i++)
    {
        if (this->selectedObjectArray[i] == object)
        {
            this->selectedObjectArray.erase(this->selectedObjectArray.begin() + i);
            return;
        }
    }

    this->selectedObjectArray.push_back(object);
}

/*virtual*/ void GLCanvas::mousePressEvent(QMouseEvent* event)
{
    switch (event->button())
    {
        case Qt::MouseButton::LeftButton:
        {
            std::vector<std::shared_ptr<Object>> currentSelectionArray = this->selectedObjectArray;

            std::shared_ptr<Object> object = this->GetObjectAtMouseLocation(event->position());

            if ((event->modifiers() & Qt::ControlModifier) != 0)
            {
                if (this->selectedObjectArray.size() == 1)
                {
                    std::shared_ptr<Object> selectedObject = this->selectedObjectArray[0];
                    this->distanceToSelectedObject = (this->cameraEyePos - selectedObject->GetPosition()).Length();
                    this->PutSelectedObjectUnderMouse(event->position());
                    this->dragDisposition = DragDisposition::DRAG_OBJECT;
                }
            }
            else if (object.get())
            {
                this->ToggleSelectionOfObject(object);
            }
            else
            {
                this->dragDisposition = DragDisposition::DRAG_CAMERA;
            }

            this->lastMousePos = event->position();

            if (currentSelectionArray != this->selectedObjectArray)
            {
                emit this->SelectionChanged(this);
            }

            break;
        }
    }

    this->update();
}

/*virtual*/ void GLCanvas::mouseMoveEvent(QMouseEvent* event)
{
    switch(this->dragDisposition)
    {
        case DragDisposition::DRAG_CAMERA:
        {
            HappyMath::Vector3 lookVector = this->cameraLookAt - this->cameraEyePos;
            double length = lookVector.Length();

            HappyMath::Vector3 upVector(0.0, 1.0, 0.0);
            HappyMath::Vector3 xAxis = lookVector.Cross(upVector).Normalized();
            HappyMath::Vector3 yAxis = xAxis.Cross(lookVector).Normalized();

            QPointF currentMousePos = event->position();
            QPointF mouseDelta = currentMousePos - this->lastMousePos;
            this->lastMousePos = currentMousePos;

            HappyMath::Vector3 delta = -xAxis * mouseDelta.x() + yAxis * mouseDelta.y();

            double sensativity = 0.1;
            this->cameraEyePos += sensativity * delta;

            HappyMath::Vector3 vector = this->cameraEyePos - this->cameraLookAt;
            vector *= length / vector.Length();
            this->cameraEyePos = this->cameraLookAt + vector;

            this->update();
            break;
        }
        case DragDisposition::DRAG_OBJECT:
        {
            this->PutSelectedObjectUnderMouse(event->position());
            this->update();
            emit this->SceneChanged(this);
            break;
        }
    }
}

/*virtual*/ void GLCanvas::mouseReleaseEvent(QMouseEvent* event)
{
    switch (event->button())
    {
        case Qt::MouseButton::LeftButton:
        {
            this->dragDisposition = DragDisposition::NONE;
            break;
        }
    }
}

/*virtual*/ void GLCanvas::mouseDoubleClickEvent(QMouseEvent* event)
{
    switch (event->button())
    {
        case Qt::MouseButton::LeftButton:
        {
            this->selectedObjectArray.clear();
            this->update();
            emit this->SelectionChanged(this);
            break;
        }
    }
}

/*virtual*/ void GLCanvas::wheelEvent(QWheelEvent* event)
{
    QPoint angleDelta = event->angleDelta();

    if ((event->modifiers() & Qt::ShiftModifier) != 0)
    {
        if (this->selectedObjectArray.size() == 1)
        {
            std::shared_ptr<Object> selectedObject = this->selectedObjectArray[0];

            double size = 0.0;
            if (selectedObject->GetSize(size))
            {
                double scaleFactor = 0.9;
                if (angleDelta.y() > 0)
                    size *= scaleFactor;
                else if (angleDelta.y() < 0)
                    size /= scaleFactor;

                selectedObject->SetSize(size);
                this->update();

                emit this->SceneChanged(this);
            }
        }
    }
    else if ((event->modifiers() & Qt::ControlModifier) != 0)
    {
        if (this->selectedObjectArray.size() == 1)
        {
            std::shared_ptr<Object> selectedObject = this->selectedObjectArray[0];

            HappyMath::Vector3 xAxis, yAxis, zAxis;
            this->viewToWorld.GetAxes(xAxis, yAxis, zAxis);

            double angle = 0.0;
            if (angleDelta.y() > 0)
                angle = M_PI / 32.0;
            else if (angleDelta.y() < 0)
                angle = -M_PI / 32.0;

            selectedObject->Rotate(xAxis, angle);
            this->update();

            emit this->SceneChanged(this);
        }
    }
    else
    {
        HappyMath::Vector3 vector = this->cameraEyePos - this->cameraLookAt;

        double minDistance = 1.0;
        double maxDistance = 500.0;
        double zoomFactor = 0.9;

        if (angleDelta.y() > 0)
            vector *= zoomFactor;
        else if (angleDelta.y() < 0)
            vector /= zoomFactor;

        HappyMath::Vector3 newEyePos = this->cameraLookAt + vector;
        double distance = (newEyePos - this->cameraLookAt).Length();

        if (distance >= minDistance && distance <= maxDistance)
        {
            this->cameraEyePos = newEyePos;
            this->update();
        }
    }
}

void GLCanvas::OnContextMenu(const QPoint& position)
{
    static std::vector<std::shared_ptr<BaseClass<Constraint>>> constraintClassArray = {
        std::make_shared<DerivedClass<Constraint, FitSphereToPointsConstraint>>(),
        std::make_shared<DerivedClass<Constraint, FitCircleToPointsConstraint>>(),
        std::make_shared<DerivedClass<Constraint, FitSphereToPointPairsConstraint>>(),
        std::make_shared<DerivedClass<Constraint, FitCircleToPointAndPointPairConstraint>>(),
        std::make_shared<DerivedClass<Constraint, FitSphereToPointAndCircleContraint>>(),
        std::make_shared<DerivedClass<Constraint, IntersectTwoSpheresToGetCircle>>(),
        std::make_shared<DerivedClass<Constraint, IntersectPlaneAndSphereToGetCircle>>(),
        std::make_shared<DerivedClass<Constraint, IntersectSphereAndCircleToGetPointPair>>()
    };

    HappyMath::Ray mouseRay = this->CalcMouseRay(position);
    HappyMath::Vector3 location = mouseRay.CalculatePoint((this->cameraEyePos - this->cameraLookAt).Length());

    QMenu contextMenu(this);

    QAction* addPointAction = contextMenu.addAction("Add Point");
    std::shared_ptr<BaseClass<Object>> pointObjectClass = std::make_shared<DerivedClass<Object, PointObject>>();
    this->connect(addPointAction, &QAction::triggered, this, [this, pointObjectClass, location]()
        {
            this->OnAddGeometry(pointObjectClass.get(), location);
        });

    QAction* addPointPairAction = contextMenu.addAction("Add Point-Pair");
    std::shared_ptr<BaseClass<Object>> pointPairObjectClass = std::make_shared<DerivedClass<Object, PointPairObject>>();
    this->connect(addPointPairAction, &QAction::triggered, this, [this, pointPairObjectClass, location]()
        {
            this->OnAddGeometry(pointPairObjectClass.get(), location);
        });

    QAction* addCircleAction = contextMenu.addAction("Add Circle");
    std::shared_ptr<BaseClass<Object>> circleObjectClass = std::make_shared<DerivedClass<Object, CircleObject>>();
    this->connect(addCircleAction, &QAction::triggered, this, [this, circleObjectClass, location]()
        {
            this->OnAddGeometry(circleObjectClass.get(), location);
        });

    QAction* addSphereAction = contextMenu.addAction("Add Sphere");
    std::shared_ptr<BaseClass<Object>> sphereObjectClass = std::make_shared<DerivedClass<Object, SphereObject>>();
    this->connect(addSphereAction, &QAction::triggered, this, [this, sphereObjectClass, location]()
        {
            this->OnAddGeometry(sphereObjectClass.get(), location);
        });

    QAction* addFlatPointAction = contextMenu.addAction("Add Flat Point");
    std::shared_ptr<BaseClass<Object>> flatPointObjectClass = std::make_shared<DerivedClass<Object, FlatPointObject>>();
    this->connect(addFlatPointAction, &QAction::triggered, this, [this, flatPointObjectClass, location]()
        {
            this->OnAddGeometry(flatPointObjectClass.get(), location);
        });

    QAction* addLineAction = contextMenu.addAction("Add Line");
    std::shared_ptr<BaseClass<Object>> lineObjectClass = std::make_shared<DerivedClass<Object, LineObject>>();
    this->connect(addLineAction, &QAction::triggered, this, [this, lineObjectClass, location]()
        {
            this->OnAddGeometry(lineObjectClass.get(), location);
        });

    QAction* addPlaneAction = contextMenu.addAction("Add Plane");
    std::shared_ptr<BaseClass<Object>> planeObjectClass = std::make_shared<DerivedClass<Object, PlaneObject>>();
    this->connect(addPlaneAction, &QAction::triggered, this, [this, planeObjectClass, location]()
        {
            this->OnAddGeometry(planeObjectClass.get(), location);
        });

    contextMenu.addSeparator();

    for (std::shared_ptr<BaseClass<Constraint>> constraintClass : constraintClassArray)
    {
        std::shared_ptr<Constraint> constraint = constraintClass->Create();
        if (constraint->TakeObjects(this->selectedObjectArray))
        {
            contextMenu.addAction(constraint->GetDesc().c_str(), [this, constraint]()
                {
                    this->constraintArray.push_back(constraint);
                    this->update();
                });
        }
    }

    if (this->objectArray.size() > 0)
    {
        contextMenu.addSeparator();
        QAction* clearSceneAction = contextMenu.addAction("Clear Scene");
        this->connect(clearSceneAction, &QAction::triggered, this, &GLCanvas::OnClearScene);
    }

    if (contextMenu.actions().size() > 0)
        contextMenu.exec(this->mapToGlobal(position));
}

void GLCanvas::OnAddGeometry(BaseClass<Object>* objectClass, const HappyMath::Vector3& location)
{
    QColor color = QColorDialog::getColor(Qt::blue, this, "Choose a color, please.");
    if (!color.isValid())
        return;

    std::shared_ptr<Object> object = objectClass->Create();
    object->SetPosition(location);

    object->color = HappyMath::Vector4(color.redF(), color.greenF(), color.blueF(), 1.0);

    this->AddObjectToScene(object);

    emit this->SceneChanged(this);
}

void GLCanvas::OnClearScene()
{
    this->ClearScene();

    emit this->SceneChanged(this);
}

void GLCanvas::PutSelectedObjectUnderMouse(const QPointF& mousePos)
{
    if (this->selectedObjectArray.size() != 1)
        return;

    std::shared_ptr<Object> selectedObject = this->selectedObjectArray[0];

    HappyMath::Ray ray = this->CalcMouseRay(mousePos);
    HappyMath::Vector3 position = ray.CalculatePoint(this->distanceToSelectedObject);
    selectedObject->SetPosition(position);
}

HappyMath::Ray GLCanvas::CalcMouseRay(const QPointF& mousePos)
{
    this->makeCurrent();

    GLint viewport[4];
    glGetIntegerv(GL_VIEWPORT, viewport);

    HappyMath::Rectangle viewportRect;
    viewportRect.minCorner.x = 0.0;
    viewportRect.maxCorner.x = (double)viewport[2];
    viewportRect.minCorner.y = 0.0;
    viewportRect.maxCorner.y = (double)viewport[3];

    double scale = this->devicePixelRatioF();

    HappyMath::Vector2 scaledPoint;
    scaledPoint.x = mousePos.x() * scale;
    scaledPoint.y = (double)viewport[3] - mousePos.y() * scale;

    HappyMath::Vector2 UVs = viewportRect.PointToUVs(scaledPoint);
    HappyMath::Ray ray = this->frustum.CalcViewSpaceRay(UVs);

    ray = this->viewToWorld.TransformRay(ray);

    return ray;
}

std::shared_ptr<Object> GLCanvas::GetObjectAtMouseLocation(const QPointF& mousePos)
{
    HappyMath::Ray ray = this->CalcMouseRay(mousePos);

    double shortestRayDistance = std::numeric_limits<double>::max();
    std::shared_ptr<Object> nearestObject;

    for (std::shared_ptr<Object> object : this->objectArray)
    {
        double rayDistance = 0.0;
        if (object->IsHitByWorldRay(ray, rayDistance) && rayDistance < shortestRayDistance)
        {
            shortestRayDistance = rayDistance;
            nearestObject = object;
        }
    }

    return nearestObject;
}