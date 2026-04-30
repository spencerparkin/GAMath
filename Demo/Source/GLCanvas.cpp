#include "GLCanvas.h"
#include "HappyMath/Frustum.h"
#include "HappyMath/Matrix4x4.h"
#include <qevent.h>

GLCanvas::GLCanvas(QWidget* parent) : QOpenGLWidget(parent)
{
    this->dragging = false;

    this->cameraEyePos = HappyMath::Vector3(20.0, 20.0, 20.0);
    this->cameraLookAt = HappyMath::Vector3(0.0, 0.0, 0.0);
}

/*virtual*/ void GLCanvas::initializeGL()
{
    initializeOpenGLFunctions();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);

    this->point[0].weight = 1.0;
    this->point[0].center.x = 0.0;
    this->point[0].center.y = 0.0;
    this->point[0].center.z = 0.0;

    this->point[1].weight = 1.0;
    this->point[1].center.x = 5.0;
    this->point[1].center.y = 0.0;
    this->point[1].center.z = 0.0;

    this->point[2].weight = 1.0;
    this->point[2].center.x = 0.0;
    this->point[2].center.y = 5.0;
    this->point[2].center.z = 0.0;

    this->point[3].weight = 1.0;
    this->point[3].center.x = 0.0;
    this->point[3].center.y = 0.0;
    this->point[3].center.z = 5.0;

    this->sphere.FitToPoints(this->point[0], this->point[1], this->point[2], this->point[3]);

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

    HappyMath::Frustum frustum;
    frustum.SetFromAspectRatio(aspectRatio, M_PI / 3.0, 0.1, 1000.0);
    
    HappyMath::Matrix4x4 projMatrix;
    frustum.GetToProjectionMatrix(projMatrix);

    HappyMath::Matrix4x4 projMatrixT;
    projMatrixT.Transpose(projMatrix);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMultMatrixd(&projMatrixT.ele[0][0]);

    HappyMath::Matrix4x4 worldToView;
    worldToView.SetAsViewTransform(this->cameraEyePos, this->cameraLookAt, HappyMath::Vector3(0.0, 1.0, 0.0));

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

    for (int i = 0; i < 4; i++)
        this->drawer.DrawPoint(this->point[i].center, HappyMath::Vector3(1.0, 0.5, 0.5), false);

    this->drawer.DrawSphere(this->sphere.center, this->sphere.radius, HappyMath::Vector3(1.0, 0.5, 0.0), true);

    glFlush();
}

/*virtual*/ void GLCanvas::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::MouseButton::LeftButton)
    {
        this->dragging = true;
        this->lastMousePos = event->position();
    }
}

/*virtual*/ void GLCanvas::mouseMoveEvent(QMouseEvent* event)
{
    if (this->dragging)
    {
        QPointF currentMousePos = event->position();
        QPointF mouseDelta = currentMousePos - this->lastMousePos;
        this->lastMousePos = currentMousePos;

        HappyMath::Vector3 lookVector = this->cameraLookAt - this->cameraEyePos;
        double length = lookVector.Length();

        HappyMath::Vector3 upVector(0.0, 1.0, 0.0);
        HappyMath::Vector3 xAxis = lookVector.Cross(upVector).Normalized();
        HappyMath::Vector3 yAxis = xAxis.Cross(lookVector).Normalized();

        double sensativity = 0.1;
        this->cameraEyePos += sensativity * (-xAxis * mouseDelta.x() + yAxis * mouseDelta.y());

        HappyMath::Vector3 vector = this->cameraEyePos - this->cameraLookAt;
        vector *= length / vector.Length();
        this->cameraEyePos = this->cameraLookAt + vector;

        this->update();
    }
}

/*virtual*/ void GLCanvas::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::MouseButton::LeftButton)
        this->dragging = false;
}