#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "Drawer.h"
#include "HappyMath/Vector3.h"
#include "HappyMath/Matrix4x4.h"
#include "HappyMath/Frustum.h"

class Object;
class Constraint;

class GLCanvas : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit GLCanvas(QWidget* parent = nullptr);

protected:
    virtual void initializeGL() override;
    virtual void resizeGL(int width, int height) override;
    virtual void paintGL() override;
    virtual void mousePressEvent(QMouseEvent* event) override;
    virtual void mouseMoveEvent(QMouseEvent* event) override;
    virtual void mouseReleaseEvent(QMouseEvent* event) override;

    std::shared_ptr<Object> GetObjectAtMouseLocation(const QPointF& mousePos);

    HappyMath::Vector3 cameraEyePos;
    HappyMath::Vector3 cameraLookAt;
    HappyMath::Matrix4x4 viewToWorld;
    HappyMath::Frustum frustum;

    std::vector<std::shared_ptr<Object>> objectArray;
    std::vector<std::shared_ptr<Constraint>> constraintArray;
    std::weak_ptr<Object> selectedObjectWeakPtr;

    Drawer drawer;
    bool dragging;
    QPointF lastMousePos;
};