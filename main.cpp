#include "dashboard.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dashboard d;
    d.show();
    return a.exec();
}