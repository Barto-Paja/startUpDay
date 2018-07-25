#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::Window /*| Qt::FramelessWindowHint*/);
    //w.setStyleSheet("QWidget {background-image: url(:/images/intro01.jpg) }");
    w.showFullScreen();//();//FullScreen();
    w.drawBackground();

    return a.exec();
}
