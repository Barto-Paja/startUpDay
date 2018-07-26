#include "formarena.h"
#include "ui_formarena.h"

FormArena::FormArena(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormArena)
{
    ui->setupUi(this);
}

FormArena::~FormArena()
{
    delete ui;
}
