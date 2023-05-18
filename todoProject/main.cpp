#include "todoProject.h"
#include "Form.h"
#include <QtWidgets/QApplication>
#include <qguiapplication.h>
#include <qscreen.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    todoProject w;
    w.QMainWindow::show();
    return a.exec();
}
