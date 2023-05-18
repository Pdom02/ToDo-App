#pragma once

#include <QWidget>
#include "Task.h"
#include <qlineedit.h>
#include <string.h>
#include <qcombobox.h>

//This is the form for the add button being clicked

class FormWidget : public QWidget
{
	Q_OBJECT

public:
	FormWidget(QWidget* parent = nullptr);
private slots:
	void pos_selectionChanged(int index);
	void time_selectionChanged(int index);
	void add_button_clicked();
private:
	QLineEdit* name;
	QComboBox* posBox;
	QComboBox* timeBox;
	Task task;
	void createTask(std::string name, int priority, int time, Task& task);
};