#pragma once

#include <qmainwindow.h>
#include "Object.h"
#include "Class.hpp"

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