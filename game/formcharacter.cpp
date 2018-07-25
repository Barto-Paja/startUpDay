#include "formcharacter.h"
#include "ui_formcharacter.h"

FormCharacter::FormCharacter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormCharacter)
{
    ui->setupUi(this);

}

FormCharacter::~FormCharacter()
{
    delete ui;
}
