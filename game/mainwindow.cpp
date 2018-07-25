#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    qDebug() << this->size();
    //ui->pushButton->setText(QString(this->size()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawBackground()
{
    QPixmap bkgnd(":/images/franck-v-628397-unsplash.jpg");
    bkgnd = bkgnd.scaled(this->size() , Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

void MainWindow::on_pushButton_2_clicked()
{
    NewGameForm *form = new NewGameForm;
    form->show();
}

void MainWindow::on_pushButton_clicked()
{
    //ui->stackedWidget->setCurrentIndex(2);
    ui->tabWidget->setCurrentIndex(2);
}
