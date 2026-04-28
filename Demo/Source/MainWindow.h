#pragma once

#include <qmainwindow.h>

/**
 * 
 */
class MainWindow : public QMainWindow
{
public:
	MainWindow(QWidget* parentWidget);
	virtual ~MainWindow();

protected:

	bool OnExitDemo();
};