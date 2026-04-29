#include "GLCanvas.h"
#include "HappyMath/Frustum.h"
#include "HappyMath/Matrix4x4.h"

GLCanvas::GLCanvas(QWidget* parent) : QOpenGLWidget(parent)
{
    this->cameraEyePos = HappyMath::Vector3(20.0, 20.0, 20.0);
    this->cameraLookAt = HappyMath::Vector3(0.0, 0.0, 0.0);
}

/*virtual*/ void GLCanvas::initializeGL()
{
    initializeOpenGLFunctions();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);

    this->point[0].w = 1.0;
    this->point[0].x = 0.0;
    this->point[0].y = 0.0;
    this->point[0].z = 0.0;

    this->point[1].w = 1.0;
    this->point[1].x = 5.0;
    this->point[1].y = 0.0;
    this->point[1].z = 0.0;

    this->point[2].w = 1.0;
    this->point[2].x = 0.0;
    this->point[2].y = 5.0;
    this->point[2].z = 0.0;

    this->point[3].w = 1.0;
    this->point[3].x = 0.0;
    this->point[3].y = 0.0;
    this->point[3].z = 5.0;

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
    {
        HappyMath::Vector3 location(this->point[i].x, this->point[i].y, this->point[i].z);
        this->drawer.DrawPoint(location, HappyMath::Vector3(1.0, 0.5, 0.5), false);
    }

    HappyMath::Vector3 center(this->sphere.cx, this->sphere.cy, this->sphere.cz);
    this->drawer.DrawSphere(center, this->sphere.r, HappyMath::Vector3(1.0, 0.5, 0.0), true);

    glFlush();
}