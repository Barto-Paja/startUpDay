#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "databasemanagementlite.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qua = new QueryAccount();

    QWidget *pageWidget = new NewGameForm();
    ui->stackedWidget->insertWidget(FormIDNewGame,pageWidget);
    connect(pageWidget,SIGNAL(exitPanel()), this, SLOT(exitNewGamePanel()));

    pageWidget = new FormSetIcon();
    ui->stackedWidget->insertWidget(FormIDSetIcon,pageWidget);

    qDebug() << this->size();
    //ui->pushButton->setText(QString(this->size()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawBackground(QPixmap &bck)
{

    bck = bck.scaled(this->size() , Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bck);
    this->setPalette(palette);
}

void MainWindow::on_pushButton_NewGame_clicked()
{
    QPixmap bck(":/images/images/backgrounds/rawpixel-653764-unsplash.jpg");
    drawBackground(bck);
    ui->stackedWidget->setCurrentIndex(FormIDNewGame);
    this->update();
}

void MainWindow::on_pushButton_LoadGame_clicked()
{

}

void MainWindow::on_pushButton_MultiPlayer_clicked()
{

}

void MainWindow::on_pushButton_About_clicked()
{

}

void MainWindow::on_pushButton_Exit_clicked()
{
    this->close();
}

void MainWindow::switchPanel()
{
    //ui->stackedWidget->setCurrentIndex(enumdef);
    this->update();
}

void MainWindow::exitNewGamePanel()
{
    ui->stackedWidget->setCurrentIndex(FormIDSetIcon);
    this->update();
}

void MainWindow::on_pushButton_Connect_clicked()
{
    qua->open();

    QString login(ui->lineEdit_Login->text());
    QString password(ui->lineEdit_Password->text());

    if(qua->login(login,password)){
        ui->label_LoginMessage->setText("Zalogowano pomyślnie!");
    }else
        ui->label_LoginMessage->setText("Błąd podczas logowania");
}
