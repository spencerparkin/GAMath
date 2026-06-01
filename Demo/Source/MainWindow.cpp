#include <qmenubar.h>
#include <qmenu.h>
#include <qaction.h>
#include <qsplitter.h>
#include "MainWindow.h"
#include "GLCanvas.h"
#include "DetailsPanel.h"
#include "Class.hpp"

MainWindow::MainWindow(QWidget* parentWidget) : QMainWindow(parentWidget)
{
	QSplitter* splitter = new QSplitter(Qt::Vertical);

	auto* canvas = new GLCanvas(this);
	auto* detailsPanel = new DetailsPanel(this);

	splitter->addWidget(canvas);
	splitter->addWidget(detailsPanel);

	this->setCentralWidget(splitter);

	splitter->setSizes({ 700, 100 });

	QObject::connect(canvas, &GLCanvas::SelectionChanged, detailsPanel, &DetailsPanel::UpdateDetailsOfScene);
	QObject::connect(canvas, &GLCanvas::SceneChanged, detailsPanel, &DetailsPanel::UpdateDetailsOfScene);

	QMenu* demoMenu = menuBar()->addMenu("Demo");

	QAction* exitAction = demoMenu->addAction("Exit");
	this->connect(exitAction, &QAction::triggered, this, &MainWindow::OnExitDemo);
}

/*virtual*/ MainWindow::~MainWindow()
{
}

bool MainWindow::OnExitDemo()
{
	return this->close();
}