#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet("background-color: rgba(255,255,255,0);");
    MainWindow w;
    w.setWindowFlags(Qt::Window /*| Qt::FramelessWindowHint*/);
    w.showFullScreen();//();//FullScreen();
    QPixmap bkgnd(QString(QCoreApplication::applicationDirPath()+"/images/backgrounds/franck-v-628397-unsplash.jpg"));
    w.drawBackground(bkgnd);

    return a.exec();
}
