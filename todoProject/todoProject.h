#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_todoProject.h"

class todoProject : public QMainWindow
{
    Q_OBJECT

public:
    todoProject(QWidget *parent = nullptr);
    ~todoProject();

private:
    Ui::todoProjectClass ui;
};
