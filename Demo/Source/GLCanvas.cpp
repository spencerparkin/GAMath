#include "GLCanvas.h"
#include "Object.h"
#include "Constraint.h"
#include "HappyMath/Matrix4x4.h"
#include "HappyMath/Rectangle.h"
#include <qevent.h>

GLCanvas::GLCanvas(QWidget* parent) : QOpenGLWidget(parent)
{
    this->dragDisposition = DragDisposition::NONE;
    this->distanceToSelectedObject = 0.0;

    this->cameraEyePos = HappyMath::Vector3(20.0, 20.0, 20.0);
    this->cameraLookAt = HappyMath::Vector3(0.0, 0.0, 0.0);
}

/*virtual*/ void GLCanvas::initializeGL()
{
    initializeOpenGLFunctions();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);

    std::shared_ptr<PointObject> pointObjectA = std::make_shared<PointObject>();
    pointObjectA->point.center.SetComponents(0.0, 0.0, 0.0);
    pointObjectA->color.SetComponents(0.0, 1.0, 0.0);
    this->objectArray.push_back(pointObjectA);

    std::shared_ptr<PointObject> pointObjectB = std::make_shared<PointObject>();
    pointObjectB->point.center.SetComponents(5.0, 0.0, 0.0);
    pointObjectB->color.SetComponents(0.0, 1.0, 0.0);
    this->objectArray.push_back(pointObjectB);

    std::shared_ptr<PointObject> pointObjectC = std::make_shared<PointObject>();
    pointObjectC->point.center.SetComponents(0.0, 5.0, 0.0);
    pointObjectC->color.SetComponents(0.0, 1.0, 0.0);
    this->objectArray.push_back(pointObjectC);

    std::shared_ptr<PointObject> pointObjectD = std::make_shared<PointObject>();
    pointObjectD->point.center.SetComponents(0.0, 0.0, 5.0);
    pointObjectD->color.SetComponents(0.0, 1.0, 0.0);
    this->objectArray.push_back(pointObjectD);

    std::shared_ptr<SphereObject> sphereObject = std::make_shared<SphereObject>();
    sphereObject->color.SetComponents(0.0, 1.0, 1.0);
    this->objectArray.push_back(sphereObject);

    std::shared_ptr<FitSphereToPointsConstraint> constraint = std::make_shared<FitSphereToPointsConstraint>();
    constraint->inputObjectWeakPtrArray.push_back(pointObjectA);
    constraint->inputObjectWeakPtrArray.push_back(pointObjectB);
    constraint->inputObjectWeakPtrArray.push_back(pointObjectC);
    constraint->inputObjectWeakPtrArray.push_back(pointObjectD);
    constraint->outputObjectWeakPtr = sphereObject;
    this->constraintArray.push_back(constraint);

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

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(10.0f, 0.0f, 0.0f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 10.0f, 0.0f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 10.0f);

    glEnd();

    for (std::shared_ptr<Constraint> constraint : this->constraintArray)
        constraint->Enforce();

    std::shared_ptr<Object> selectedObject = this->selectedObjectWeakPtr.lock();
    for (std::shared_ptr<Object> object : this->objectArray)
        object->Draw(&this->drawer, object == selectedObject);

    glFlush();
}

/*virtual*/ void GLCanvas::mousePressEvent(QMouseEvent* event)
{
    switch (event->button())
    {
        case Qt::MouseButton::LeftButton:
        {
            if ((event->modifiers() & Qt::ShiftModifier) != 0)
            {
                std::shared_ptr<Object> selectedObject = this->selectedObjectWeakPtr.lock();
                if (selectedObject.get())
                {
                    this->dragDisposition = DragDisposition::DRAG_OBJECT;
                    this->distanceToSelectedObject = (this->cameraEyePos - selectedObject->GetPosition()).Length();
                    this->PutSelectedObjectUnderMouse(event->position());
                    this->update();
                }
            }
            else
            {
                this->dragDisposition = DragDisposition::DRAG_CAMERA;
            }

            this->lastMousePos = event->position();
            break;
        }
        case Qt::MouseButton::RightButton:
        {
            std::shared_ptr<Object> object = this->GetObjectAtMouseLocation(event->position());
            this->selectedObjectWeakPtr = object;
            this->update();
            break;
        }
    }
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

/*virtual*/ void GLCanvas::wheelEvent(QWheelEvent* event)
{
    QPoint angleDelta = event->angleDelta();

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

void GLCanvas::PutSelectedObjectUnderMouse(const QPointF& mousePos)
{
    std::shared_ptr<Object> selectedObject = this->selectedObjectWeakPtr.lock();
    if (!selectedObject.get())
        return;

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