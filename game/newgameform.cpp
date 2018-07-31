#include "newgameform.h"
#include "ui_newgameform.h"

#include <QDebug>

NewGameForm::NewGameForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewGameForm)
{
    ui->setupUi(this);
    player = new Character();

}

NewGameForm::~NewGameForm()
{
    delete ui;
    delete player;
}

void NewGameForm::showEvent(QEvent *event)
{

}

void NewGameForm::on_pushButton_Next_clicked()
{
    emit exitPanel();
}

void NewGameForm::on_pushButton_AssemblerPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_AssemblerPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_CPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_CPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_CSharpPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_CSharpPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_CppPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_CppPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_GoPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_GoPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_HaskellPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_HaskellPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_JavaPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_JavaPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_JavaScriptsPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_JavaScriptPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_MatLabPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_MatLabPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_ObjectiveCPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_ObjectiveCPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_PerlPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_PerlPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_PHPPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_PHPPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_PythonPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_PythonPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_RPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_RPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_RubyPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_RubyPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_SQLPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_SQLPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_SwiftPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_SwiftPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_VBAPointsUp_clicked()
{

}

void NewGameForm::on_pushButton_VBAPointsDown_clicked()
{

}

void NewGameForm::on_pushButton_TalentLevelUp_clicked()
{

}

void NewGameForm::on_pushButton_TalentLevelDown_clicked()
{

}

void NewGameForm::on_pushButton_ResetAddedPoints_clicked()
{

}

void NewGameForm::loadLanguages()
{
    qDebug() << player->getStat(LanguageAssembler);
    ui->label_AssemblerPoints->setText(QString::number(player->getStat(LanguageAssembler)));
}
