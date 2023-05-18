#include "todoProject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    todoProject w;
    w.show();
    return a.exec();
}
