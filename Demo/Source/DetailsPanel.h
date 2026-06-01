#pragma once

#include <qtextedit.h>

class GLCanvas;

class DetailsPanel : public QWidget
{
public:
	DetailsPanel(QWidget* parent);
	virtual ~DetailsPanel();

public slots:
	void UpdateDetailsOfScene(GLCanvas* canvas);

private:
	QTextEdit* textEdit;
};