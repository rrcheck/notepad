#include "mainwindow.h"
#include <QApplication>
/* tests for my buttt*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
