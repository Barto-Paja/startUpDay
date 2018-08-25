#include "formarena.h"
#include "ui_formarena.h"

FormArena::FormArena(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormArena)
{
    ui->setupUi(this);

    this->update();



}

FormArena::~FormArena()
{
    delete ui;
}

void FormArena::makeMirrorLookTeam()
{
    //  i tak trzeba zrobić ze wszystkim, co jest w widżetach
//    ui->verticalLayout_RedTeamPlayerOne->setAlignment(ui->label_RobotNameRT,Qt::AlignRight);
//    ui->verticalLayout_RedTeamPlayerOne->setAlignment(ui->label_RobotAvatarRT,Qt::AlignRight);
//    ui->verticalLayout_RedTeamPlayerOne->setAlignment(ui->label_RobotNameBT,Qt::AlignRight);
//    ui->verticalLayout_RedTeamPlayerOne->setAlignment(ui->label_RobotNameBT,Qt::AlignRight);
//    ui->verticalLayout_RedTeamPlayerOne->setAlignment(ui->label_RobotNameBT,Qt::AlignRight);
//    ui->verticalLayout_RedTeamPlayerOne->setAlignment()
}

void FormArena::on_pushButton_clicked()
{

}

void FormArena::on_pushButton_2_clicked()
{

}

void FormArena::on_pushButton_3_clicked()
{

}

void FormArena::on_pushButton_4_clicked()
{

}

void FormArena::on_pushButton_5_clicked()
{

}

void FormArena::on_pushButton_6_clicked()
{

}
