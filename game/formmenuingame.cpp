#include "formmenuingame.h"
#include "ui_formmenuingame.h"

FormMenuInGame::FormMenuInGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormMenuInGame)
{
    ui->setupUi(this);
    player = new Character();
}

FormMenuInGame::~FormMenuInGame()
{
    delete ui;
}

void FormMenuInGame::showEvent(QShowEvent *event)
{
    ui->label_PlayerName->setText(player->getName());
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label->setScaledContents(true);
    ui->label->setHidden(true);
    ui->label_3->setHidden(true);
    ui->label_2->setPixmap(QString(QCoreApplication::applicationDirPath()+"/images/news/ukasz.png"));
    ui->label_3->setPixmap(QString(QCoreApplication::applicationDirPath()+"/images/news/bemovo.png"));
    ui->label->setPixmap(QString(QCoreApplication::applicationDirPath()+"/images/news/faq.png"));

    this->update();
}
