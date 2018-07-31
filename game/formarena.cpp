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
    ui->verticalLayout_RedTeamPlayerOne->setAlignment(ui->label_RobotNameBT,Qt::AlignRight);
}
