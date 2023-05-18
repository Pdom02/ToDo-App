#include <QDialog>
#include <QWidget>
#include <iostream>
#include "Form.h"
#include <string.h>
#include "Task.h"
#include "todoProject.h"
#include <vector>
#include <QLineEdit>
#include <qcombobox.h>
#include <qstringlist.h>
#include <qguiapplication.h>
#include <qscreen.h>



FormWidget::FormWidget(QWidget* parent) : QWidget(parent), task("default name", 0, 0)
{
    QVBoxLayout* layout = new QVBoxLayout(this);

    name = new QLineEdit("Task name", this);
    posBox = new QComboBox(this);
    timeBox = new QComboBox(this);
    QStringList posNums;
    QStringList timeNums;
    for (int i = 0; i <= 4; i++)
    {
        posNums << QString::number(i);
    }
    posBox->addItems(posNums);

    for (int i = 0; i <= 24; i++)
    {
        timeNums << QString::number(i);
    }
    timeBox->addItems(timeNums);

    QPushButton* addButton = new QPushButton("Add", this);
    connect(posBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &FormWidget::pos_selectionChanged);
    connect(timeBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &FormWidget::time_selectionChanged);
    connect(addButton, &QPushButton::clicked, this, [this]() {add_button_clicked();});

    layout->addWidget(name);
    layout->addWidget(posBox);
    layout->addWidget(timeBox);

 
    show();
}



void FormWidget::createTask(std::string name, int priority, int time, Task& task)
{
    task.setTaskname(name, &task);
    task.setPriority(priority, &task);
    task.setTime(time, &task);
}

void FormWidget::add_button_clicked()
{
    std::string taskName = name->text().toStdString(); // Access the text from the QLineEdit
    int priority = posBox->currentIndex();
    int time = timeBox->currentIndex();
    createTask(taskName, priority, time, task);
}

void FormWidget::pos_selectionChanged(int index)
{
    int priority = index;
}

void FormWidget::time_selectionChanged(int index)
{
    int time = index;
}


