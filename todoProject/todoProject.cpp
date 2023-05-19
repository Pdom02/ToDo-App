#include "todoProject.h"
#include "Form.h"
#include "Task.h"
#include <iostream>
#include <qdebug.h>
#include <qdialog.h>
#include <qboxlayout.h>

todoProject::todoProject(QWidget* parent)
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
    QDialog add_task_dialog(this);
    QVBoxLayout task_layout(&add_task_dialog);

    FormWidget* formWidget = new FormWidget(&add_task_dialog);
    task_layout.addWidget(formWidget);
    formWidget->resize(300, 200);
    formWidget->show();

    add_task_dialog.exec();
    qDebug() << "Show...";
}

todoProject::~todoProject()
{}
