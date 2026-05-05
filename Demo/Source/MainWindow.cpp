#include <qmenubar.h>
#include <qmenu.h>
#include <qaction.h>
#include <QColorDialog>
#include "MainWindow.h"
#include "GLCanvas.h"
#include "Class.hpp"

MainWindow::MainWindow(QWidget* parentWidget) : QMainWindow(parentWidget)
{
	auto* canvas = new GLCanvas(this);
	this->setCentralWidget(canvas);

	QMenu* demoMenu = menuBar()->addMenu("Demo");

	QAction* exitAction = demoMenu->addAction("Exit");
	this->connect(exitAction, &QAction::triggered, this, &MainWindow::OnExitDemo);

	QMenu* geometryMenu = menuBar()->addMenu("Geometry");

	this->connect(geometryMenu, &QMenu::aboutToShow, this, &MainWindow::OnUpdateMenuActions);

	this->clearSceneAction = geometryMenu->addAction("Clear Scene");
	this->connect(this->clearSceneAction, &QAction::triggered, this, &MainWindow::OnClearScene);

	geometryMenu->addSeparator();

	QAction* addPointAction = geometryMenu->addAction("Add Point");
	std::shared_ptr<BaseClass<Object>> pointObjectClass = std::make_shared<DerivedClass<Object, PointObject>>();
	this->connect(addPointAction, &QAction::triggered, this, [this, pointObjectClass]()
		{
			this->OnAddGeometry(pointObjectClass.get());
		});

	QAction* addPointPairAction = geometryMenu->addAction("Add Point-Pair");
	std::shared_ptr<BaseClass<Object>> pointPairObjectClass = std::make_shared<DerivedClass<Object, PointPairObject>>();
	this->connect(addPointPairAction, &QAction::triggered, this, [this, pointPairObjectClass]()
		{
			this->OnAddGeometry(pointPairObjectClass.get());
		});

	QAction* addCircleAction = geometryMenu->addAction("Add Circle");
	std::shared_ptr<BaseClass<Object>> circleObjectClass = std::make_shared<DerivedClass<Object, CircleObject>>();
	this->connect(addCircleAction, &QAction::triggered, this, [this, circleObjectClass]()
		{
			this->OnAddGeometry(circleObjectClass.get());
		});

	QAction* addSphereAction = geometryMenu->addAction("Add Sphere");
	std::shared_ptr<BaseClass<Object>> sphereObjectClass = std::make_shared<DerivedClass<Object, SphereObject>>();
	this->connect(addSphereAction, &QAction::triggered, this, [this, sphereObjectClass]()
		{
			this->OnAddGeometry(sphereObjectClass.get());
		});

	// STPTODO: There should be a way to link the shapes together using constraints.
	// STPTODO: There should be a way to show details information about the selected shape, such as its blade.
}

/*virtual*/ MainWindow::~MainWindow()
{
}

void MainWindow::OnUpdateMenuActions()
{
	auto* canvas = (GLCanvas*)this->centralWidget();
	this->clearSceneAction->setEnabled(canvas->GetNumObjectsInScene() > 0);
}

void MainWindow::OnAddGeometry(BaseClass<Object>* objectClass)
{
	QColor color = QColorDialog::getColor(Qt::blue, this, "Choose a color, please.");
	if (!color.isValid())
		return;

	std::shared_ptr<Object> object = objectClass->Create();
	object->SetPosition(HappyMath::Vector3(0.0, 0.0, 0.0));

	object->color = HappyMath::Vector4(color.redF(), color.greenF(), color.blueF(), 1.0);

	auto* canvas = (GLCanvas*)this->centralWidget();
	canvas->AddObjectToScene(object);
}

void MainWindow::OnClearScene()
{
	auto* canvas = (GLCanvas*)this->centralWidget();
	canvas->ClearScene();
}

bool MainWindow::OnExitDemo()
{
	return this->close();
}