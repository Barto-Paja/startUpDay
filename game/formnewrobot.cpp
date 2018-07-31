#include "formnewrobot.h"
#include "ui_formnewrobot.h"

FormNewRobot::FormNewRobot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormNewRobot)
{
    ui->setupUi(this);
}

FormNewRobot::~FormNewRobot()
{
    delete ui;
}
