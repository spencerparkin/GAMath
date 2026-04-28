#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "HappyMath/Vector3.h"

class GLCanvas : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit GLCanvas(QWidget* parent = nullptr);

protected:
    virtual void initializeGL() override;
    virtual void resizeGL(int width, int height) override;
    virtual void paintGL() override;

    HappyMath::Vector3 cameraEyePos;
    HappyMath::Vector3 cameraLookAt;
};