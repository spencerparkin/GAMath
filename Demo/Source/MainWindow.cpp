#include <qmenubar.h>
#include <qmenu.h>
#include <qaction.h>
#include "MainWindow.h"
#include "GLCanvas.h"

MainWindow::MainWindow(QWidget* parentWidget) : QMainWindow(parentWidget)
{
	auto* canvas = new GLCanvas(this);
	this->setCentralWidget(canvas);

	QMenu* demoMenu = menuBar()->addMenu("Demo");

	QAction* exitAction = demoMenu->addAction("Exit");
	this->connect(exitAction, &QAction::triggered, this, &MainWindow::OnExitDemo);

	QMenu* geometryMenu = menuBar()->addMenu("Geometry");

	QAction* clearSceneAction = geometryMenu->addAction("Clear Scene");
	this->connect(clearSceneAction, &QAction::triggered, this, &MainWindow::OnClearScene);

	geometryMenu->addSeparator();

	QAction* addPointAction = geometryMenu->addAction("Add Point");
	std::shared_ptr<ObjectClass> pointObjectClass = std::make_shared<ObjectClassT<PointObject>>();
	this->connect(addPointAction, &QAction::triggered, this, [this, pointObjectClass]()
		{
			this->OnAddGeometry(pointObjectClass.get());
		});

	QAction* addPointPairAction = geometryMenu->addAction("Add Point-Pair");
	std::shared_ptr<ObjectClass> pointPairObjectClass = std::make_shared<ObjectClassT<PointPairObject>>();
	this->connect(addPointPairAction, &QAction::triggered, this, [this, pointPairObjectClass]()
		{
			this->OnAddGeometry(pointPairObjectClass.get());
		});

	QAction* addCircleAction = geometryMenu->addAction("Add Circle");
	std::shared_ptr<ObjectClass> circleObjectClass = std::make_shared<ObjectClassT<CircleObject>>();
	this->connect(addCircleAction, &QAction::triggered, this, [this, circleObjectClass]()
		{
			this->OnAddGeometry(circleObjectClass.get());
		});

	QAction* addSphereAction = geometryMenu->addAction("Add Sphere");
	std::shared_ptr<ObjectClass> sphereObjectClass = std::make_shared<ObjectClassT<SphereObject>>();
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

void MainWindow::OnAddGeometry(ObjectClass* objectClass)
{
	std::shared_ptr<Object> object = objectClass->Create();
	object->SetPosition(HappyMath::Vector3(0.0, 0.0, 0.0));
	
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