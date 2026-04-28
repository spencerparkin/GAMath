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
}

/*virtual*/ MainWindow::~MainWindow()
{
}

bool MainWindow::OnExitDemo()
{
	return this->close();
}