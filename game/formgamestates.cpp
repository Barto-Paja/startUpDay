#include "formgamestates.h"
#include "ui_formgamestates.h"

FormGameStates::FormGameStates(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormGameStates)
{
    ui->setupUi(this);
}

FormGameStates::~FormGameStates()
{
    delete ui;
}
