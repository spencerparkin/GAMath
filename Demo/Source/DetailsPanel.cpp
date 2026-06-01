#include "DetailsPanel.h"
#include "GLCanvas.h"
#include "Object.h"
#include <qlayout.h>

DetailsPanel::DetailsPanel(QWidget* parent) : QWidget(parent)
{
	auto* layout = new QVBoxLayout(this);

	this->textEdit = new QTextEdit();
	this->textEdit->setReadOnly(true);

	layout->addWidget(this->textEdit);
}

/*virtual*/ DetailsPanel::~DetailsPanel()
{
}

void DetailsPanel::UpdateDetailsOfScene(GLCanvas* canvas)
{
	const std::vector<std::shared_ptr<Object>>& selectedObjectArray = canvas->GetSelectedObjects();

	if (selectedObjectArray.size() == 1)
	{
		const Object* object = selectedObjectArray[0].get();

		std::string details = object->GetDetails();

		this->textEdit->setPlainText(QString(details.c_str()));
	}
}