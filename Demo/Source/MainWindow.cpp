#include <qmenubar.h>
#include <qmenu.h>
#include <qaction.h>
#include "MainWindow.h"
#include "GLCanvas.h"

MainWindow::MainWindow(QWidget* parentWidget) : QMainWindow(parentWidget)
{
	auto* canvas = new GLCanvas(this);
	this->setCentralWidget(canvas);

	auto* demoMenu = menuBar()->addMenu("Demo");

	auto* exitAction = demoMenu->addAction("Exit");
	this->connect(exitAction, &QAction::triggered, this, &MainWindow::OnExitDemo);

	// STPTODO: There should be a way to create/destroy individual shapes.
	// STPTODO: There should be a way to link the shapes together using constraints.
	// STPTODO: There should be a way to show details information about the selected shape, such as its blade.
}

/*virtual*/ MainWindow::~MainWindow()
{
}

bool MainWindow::OnExitDemo()
{
	return this->close();
}