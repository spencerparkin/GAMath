#include <qmenubar.h>
#include <qmenu.h>
#include <qaction.h>
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

	// STPTODO: There should be a way to show details information about the selected shape, such as its blade.
}

/*virtual*/ MainWindow::~MainWindow()
{
}

bool MainWindow::OnExitDemo()
{
	return this->close();
}