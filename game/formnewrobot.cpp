#include "formnewrobot.h"
#include "ui_formnewrobot.h"

FormNewRobot::FormNewRobot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormNewRobot)
{
    ui->setupUi(this);
    robot = new Robot();
}

FormNewRobot::~FormNewRobot()
{
    delete ui;
}

void FormNewRobot::ShowEvent(QShowEvent *event)
{
    Q_UNUSED(event);
}

void FormNewRobot::on_pushButton_Next_clicked()
{
    emit exitPanel();
}

void FormNewRobot::on_pushButton_StrenghtPointUp_clicked()
{
    // Tutaj musi być przelicznik x10 za pkt

    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_StrenghtPoints->text().toInt();
    i=i+10;
    ui->label_StrenghtPoints->setText(QString::number(i));
}

void FormNewRobot::on_pushButton_StrenghtPointDown_clicked()
{
    // Tutaj musi być przelicznik x10 za pkt
    int i = ui->label_StrenghtPoints->text().toInt();
    if(i<=robot->getStat(RobotStatStrenght)){
        return;
    }

    i=i-10;
    ui->label_StrenghtPoints->setText(QString::number(i));
    putPointOnOthers();
}

void FormNewRobot::on_pushButton_DamagePointUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_DamagePoints->text().toInt();
    ++i;
    ui->label_DamagePoints->setText(QString::number(i));
}

void FormNewRobot::on_pushButton_DamagePointDown_clicked()
{
    int i = ui->label_DamagePoints->text().toInt();
    if(i<=robot->getStat(RobotStatDamage)){
        return;
    }

    --i;
    ui->label_DamagePoints->setText(QString::number(i));
    putPointOnOthers();
}

void FormNewRobot::on_pushButton_ShieldPointUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_ShieldPoints->text().toInt();
    ++i;
    ui->label_ShieldPoints->setText(QString::number(i));
}

void FormNewRobot::on_pushButton_ShieldPointDown_clicked()
{
    int i = ui->label_ShieldPoints->text().toInt();
    if(i<=robot->getStat(RobotStatShield)){
        return;
    }

    --i;
    ui->label_ShieldPoints->setText(QString::number(i));
    putPointOnOthers();
}

void FormNewRobot::on_pushButton_MovementPointUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_MovementPoints->text().toInt();
    ++i;
    ui->label_MovementPoints->setText(QString::number(i));
}

void FormNewRobot::on_pushButton_MovementPointDown_clicked()
{
    int i = ui->label_MovementPoints->text().toInt();
    if(i<=robot->getStat(RobotStatMovement)){
        return;
    }

    --i;
    ui->label_MovementPoints->setText(QString::number(i));
    putPointOnOthers();
}

void FormNewRobot::on_pushButton_ChargingPointUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_ChargingPoints->text().toInt();
    ++i;
    ui->label_ChargingPoints->setText(QString::number(i));
}

void FormNewRobot::on_pushButton_ChargingPointDown_clicked()
{
    int i = ui->label_ChargingPoints->text().toInt();
    if(i<=robot->getStat(RobotStatCharging)){
        return;
    }

    --i;
    ui->label_ChargingPoints->setText(QString::number(i));
    putPointOnOthers();
}

void FormNewRobot::on_pushButton_EnergyPointUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_EnergyPoints->text().toInt();
    ++i;
    ui->label_EnergyPoints->setText(QString::number(i));
}

void FormNewRobot::on_pushButton_EnergyPointDown_clicked()
{
    int i = ui->label_EnergyPoints->text().toInt();
    if(i<=robot->getStat(RobotStatEnergy)){
        return;
    }

    --i;
    ui->label_EnergyPoints->setText(QString::number(i));
    putPointOnOthers();
}

void FormNewRobot::on_pushButton_ResetPoints_clicked()
{
    loadStats();
}

void FormNewRobot::loadStats()
{
    ui->label_ChargingPoints->setText(QString::number(robot->getStat(RobotStatCharging)));
    ui->label_DamagePoints->setText(QString::number(robot->getStat(RobotStatDamage)));
    ui->label_EnergyPoints->setText(QString::number(robot->getStat(RobotStatEnergy)));
    ui->label_MovementPoints->setText(QString::number(robot->getStat(RobotStatDamage)));
    ui->label_OtherPoints->setText(QString::number(robot->getStat(RobotStatOthers)));
    ui->label_ShieldPoints->setText(QString::number(robot->getStat(RobotStatShield)));
    ui->label_StrenghtPoints->setText(QString::number(robot->getStat(RobotStatStrenght)));
}

void FormNewRobot::getPointFromOthers()
{
    int i = ui->label_OtherPoints->text().toInt();
    if(i==0){
        return;
    }

    --i;
    ui->label_OtherPoints->setText(QString::number(i));
}

void FormNewRobot::putPointOnOthers()
{
    int i = ui->label_OtherPoints->text().toInt();
    ++i;
    ui->label_OtherPoints->setText(QString::number(i));
}

bool FormNewRobot::isLeftPoint()
{
    if(ui->label_OtherPoints->text().toInt()==0){
        return false;
    }
    else
        return true;
}
