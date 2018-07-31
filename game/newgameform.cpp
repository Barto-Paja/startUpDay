#include "newgameform.h"
#include "ui_newgameform.h"

#include <QDebug>

NewGameForm::NewGameForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewGameForm)
{
    ui->setupUi(this);

}

NewGameForm::~NewGameForm()
{
    delete ui;
}

void NewGameForm::on_pushButton_Next_clicked()
{
    emit exitPanel();
}

void NewGameForm::on_pushButton_AssemblerPointsUp_clicked()
{

}
