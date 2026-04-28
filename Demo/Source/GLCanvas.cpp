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

    glFlush();
}