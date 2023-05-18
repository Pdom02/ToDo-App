#pragma once
#include <QtWidgets/QMainWindow>
#include "Form.h"
#include "ui_todoProject.h"

class todoProject : public QMainWindow
{
    Q_OBJECT
public:
    todoProject(QWidget *parent = nullptr);
    ~todoProject();

private slots:
    void on_add_clicked();

private:
    Ui::todoProjectClass ui;
    FormWidget* formWidget;

};
