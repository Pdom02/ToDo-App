#include "todoProject.h"
#include "Form.h"
#include "Task.h"

todoProject::todoProject(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QPushButton* button = ui.add_button;
    if (button)
    {
        connect(button, &QPushButton::clicked, this, &todoProject::on_add_clicked);
    }  
}

void todoProject::on_add_clicked()
{
    FormWidget* formWidget = new FormWidget(this);

    formWidget->show();
}

todoProject::~todoProject()
{}
