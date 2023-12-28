#include "MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Ilmin`s Beat Making ( With KeyBoard )");
    w.show();
    return a.exec();
}
