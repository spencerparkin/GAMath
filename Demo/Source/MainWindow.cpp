#include <qmenubar.h>
#include <qmenu.h>
#include <qaction.h>
#include <qlayout.h>
#include "MainWindow.h"
#include "GLCanvas.h"
#include "DetailsPanel.h"
#include "Class.hpp"

MainWindow::MainWindow(QWidget* parentWidget) : QMainWindow(parentWidget)
{
	QWidget* mainWidget = new QWidget(this);

	auto* canvas = new GLCanvas(mainWidget);
	auto* detailsPanel = new DetailsPanel(mainWidget);

	canvas->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	detailsPanel->setFixedHeight(150);
	detailsPanel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

	auto* mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(canvas, 1);
	mainLayout->addWidget(detailsPanel, 0);
	mainLayout->setSpacing(0);
	mainLayout->setContentsMargins(4, 4, 4, 4);

	mainWidget->setLayout(mainLayout);

	this->setCentralWidget(mainWidget);

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