#include "formrobot.h"
#include "ui_formrobot.h"

FormRobot::FormRobot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRobot)
{
    ui->setupUi(this);
}

FormRobot::~FormRobot()
{
    delete ui;
}
