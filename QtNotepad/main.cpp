#include "mainwindow.h"
#include <QApplication>
/* test for my butt*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
