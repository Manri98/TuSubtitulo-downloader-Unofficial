#include "mainwindow.h"
#include <QApplication>
#include <libs/tvdb.h>
#include <libs/tvdb_key.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
