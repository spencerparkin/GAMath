#pragma once

#include <qmainwindow.h>
#include "Object.h"

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
	void OnAddGeometry(ObjectClass* objectClass);
	void OnClearScene();
};