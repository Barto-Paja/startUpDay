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

void NewGameForm::showEvent(QShowEvent *event)
{
   loadLanguages();
   auto  person = static_cast<Character_t>(rand() % CharacterLast);
   ui->label_CharacterValue->setText(player->getPersonalityName(person));
}

void NewGameForm::on_pushButton_Next_clicked()
{
    player->setStats(ui->label_AssemblerPoints->text().toInt());
    player->setStats(ui->label_CPoints->text().toInt());
    player->setStats(ui->label_CSharpPoints->text().toInt());
    player->setStats(ui->label_CppPoints->text().toInt());
    player->setStats(ui->label_GoPoints->text().toInt());
    player->setStats(ui->label_HaskellPoints->text().toInt());
    player->setStats(ui->label_JavaPoints->text().toInt());
    player->setStats(ui->label_JavaScriptPoints->text().toInt());
    player->setStats(ui->label_MatLabPoints->text().toInt());
    player->setStats(ui->label_ObjectiveCPoints->text().toInt());
    player->setStats(ui->label_PerlPoints->text().toInt());
    player->setStats(ui->label_PHPPoints->text().toInt());
    player->setStats(ui->label_PythonPoints->text().toInt());
    player->setStats(ui->label_RPoints->text().toInt());
    player->setStats(ui->label_RubyPoints->text().toInt());
    player->setStats(ui->label_SQLPoints->text().toInt());
    player->setStats(ui->label_SwiftPoints->text().toInt());
    player->setStats(ui->label_VBAPoints->text().toInt());
    player->setStats(ui->label_OtherPoints->text().toInt());
    player->setStats(tempTalent);
    player->sendNewStats();

    player->setName(ui->lineEdit_Name->text());

    emit exitPanel();
}

void NewGameForm::on_pushButton_AssemblerPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_AssemblerPoints->text().toInt();
    ++i;
    ui->label_AssemblerPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_AssemblerPointsDown_clicked()
{
    int i = ui->label_AssemblerPoints->text().toInt();
    if(i<=player->getStat(LanguageAssembler)){
        return;
    }

    --i;
    ui->label_AssemblerPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_CPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_CPoints->text().toInt();
    ++i;
    ui->label_CPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_CPointsDown_clicked()
{
    int i = ui->label_CPoints->text().toInt();
    if(i<=player->getStat(LanguageC)){
        return;
    }

    --i;
    ui->label_CPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_CSharpPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_CSharpPoints->text().toInt();
    ++i;
    ui->label_CSharpPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_CSharpPointsDown_clicked()
{
    int i = ui->label_CSharpPoints->text().toInt();
    if(i<=player->getStat(LanguageCsharp)){
        return;
    }

    --i;
    ui->label_CSharpPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_CppPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_CppPoints->text().toInt();
    ++i;
    ui->label_CppPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_CppPointsDown_clicked()
{
    int i = ui->label_CppPoints->text().toInt();
    if(i<=player->getStat(LanguageCpp)){
        return;
    }

    --i;
    ui->label_CppPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_GoPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_GoPoints->text().toInt();
    ++i;
    ui->label_GoPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_GoPointsDown_clicked()
{
    int i = ui->label_GoPoints->text().toInt();
    if(i<=player->getStat(LanguageGoLang)){
        return;
    }

    --i;
    ui->label_GoPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_HaskellPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_HaskellPoints->text().toInt();
    ++i;
    ui->label_HaskellPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_HaskellPointsDown_clicked()
{
    int i = ui->label_HaskellPoints->text().toInt();
    if(i<=player->getStat(LanguageHaskell)){
        return;
    }

    --i;
    ui->label_HaskellPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_JavaPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_JavaPoints->text().toInt();
    ++i;
    ui->label_JavaPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_JavaPointsDown_clicked()
{
    int i = ui->label_JavaPoints->text().toInt();
    if(i<=player->getStat(LanguageJava)){
        return;
    }

    --i;
    ui->label_JavaPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_JavaScriptsPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_JavaScriptPoints->text().toInt();
    ++i;
    ui->label_JavaScriptPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_JavaScriptPointsDown_clicked()
{
    int i = ui->label_JavaScriptPoints->text().toInt();
    if(i<=player->getStat(LanguageJavaScript)){
        return;
    }

    --i;
    ui->label_JavaScriptPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_MatLabPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_MatLabPoints->text().toInt();
    ++i;
    ui->label_MatLabPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_MatLabPointsDown_clicked()
{
    int i = ui->label_MatLabPoints->text().toInt();
    if(i<=player->getStat(LanguageMatLab)){
        return;
    }

    --i;
    ui->label_MatLabPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_ObjectiveCPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_ObjectiveCPoints->text().toInt();
    ++i;
    ui->label_ObjectiveCPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_ObjectiveCPointsDown_clicked()
{
    int i = ui->label_ObjectiveCPoints->text().toInt();
    if(i<=player->getStat(LanguageObjectiveC)){
        return;
    }

    --i;
    ui->label_ObjectiveCPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_PerlPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_PerlPoints->text().toInt();
    ++i;
    ui->label_PerlPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_PerlPointsDown_clicked()
{
    int i = ui->label_PerlPoints->text().toInt();
    if(i<=player->getStat(LanguagePerl)){
        return;
    }

    --i;
    ui->label_PerlPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_PHPPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_PHPPoints->text().toInt();
    ++i;
    ui->label_PHPPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_PHPPointsDown_clicked()
{
    int i = ui->label_PHPPoints->text().toInt();
    if(i<=player->getStat(LanguagePHP)){
        return;
    }

    --i;
    ui->label_PHPPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_PythonPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_PythonPoints->text().toInt();
    ++i;
    ui->label_PythonPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_PythonPointsDown_clicked()
{
    int i = ui->label_PythonPoints->text().toInt();
    if(i<=player->getStat(LanguagePython)){
        return;
    }

    --i;
    ui->label_PythonPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_RPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_RPoints->text().toInt();
    ++i;
    ui->label_RPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_RPointsDown_clicked()
{
    int i = ui->label_RPoints->text().toInt();
    if(i<=player->getStat(LanguageR)){
        return;
    }

    --i;
    ui->label_RPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_RubyPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_RubyPoints->text().toInt();
    ++i;
    ui->label_RubyPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_RubyPointsDown_clicked()
{
    int i = ui->label_RubyPoints->text().toInt();
    if(i<=player->getStat(LanguageRuby)){
        return;
    }

    --i;
    ui->label_RubyPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_SQLPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_SQLPoints->text().toInt();
    ++i;
    ui->label_SQLPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_SQLPointsDown_clicked()
{
    int i = ui->label_SQLPoints->text().toInt();
    if(i<=player->getStat(LanguageSQL)){
        return;
    }

    --i;
    ui->label_SQLPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_SwiftPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_SwiftPoints->text().toInt();
    ++i;
    ui->label_SwiftPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_SwiftPointsDown_clicked()
{
    int i = ui->label_SwiftPoints->text().toInt();
    if(i<=player->getStat(LanguageSwift)){
        return;
    }

    --i;
    ui->label_SwiftPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_VBAPointsUp_clicked()
{
    if(!isLeftPoint()){
        return;
    }
    getPointFromOthers();

    int i = ui->label_VBAPoints->text().toInt();
    ++i;
    ui->label_VBAPoints->setText(QString::number(i));
}

void NewGameForm::on_pushButton_VBAPointsDown_clicked()
{
    int i = ui->label_VBAPoints->text().toInt();
    if(i<=player->getStat(LanguageVBA)){
        return;
    }

    --i;
    ui->label_VBAPoints->setText(QString::number(i));
    putPointOnOthers();
}

void NewGameForm::on_pushButton_TalentLevelUp_clicked()
{
    if(ui->label_OtherPoints->text().toInt()<20){
        return;
    }

    switch (tempTalent) {
    case 1:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars2.png"));
        break;
    }
    case 2:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars3.png"));
        break;
    }
    case 3:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars4.png"));
        break;
    }
    case 4:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars5.png"));
        break;
    }
    case 5:break;
    default:break;
    }

    if(tempTalent<5){
        int i = ui->label_OtherPoints->text().toInt();
        i=(i-20);
        ui->label_OtherPoints->setText(QString::number(i));
        ++tempTalent;
    }
}

void NewGameForm::on_pushButton_TalentLevelDown_clicked()
{
    if(tempTalent==player->getStat(LanguageTalent)){
        return;
    }

    switch (tempTalent) {
    case 1:break;
    case 2:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars1.png"));
        break;
    }
    case 3:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars2.png"));
        break;
    }
    case 4:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars3.png"));
        break;
    }
    case 5:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars4.png"));
        break;
    }
    default:break;
    }

    if(tempTalent>1){
        int i = ui->label_OtherPoints->text().toInt();
        i=(i+20);
        ui->label_OtherPoints->setText(QString::number(i));
        --tempTalent;
    }
}

void NewGameForm::on_pushButton_ResetAddedPoints_clicked()
{
    loadLanguages();

    switch (tempTalent) {
    case 1:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars1.png"));
        break;
    }
    case 2:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars2.png"));
        break;
    }
    case 3:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars3.png"));
        break;
    }
    case 4:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars4.png"));
        break;
    }
    case 5:{
        ui->label_TalentLevelStars->setPixmap(QString(":/images/images/stars5.png"));
        break;
    }
    default:break;
    }
}

void NewGameForm::loadLanguages()
{
    ui->label_AssemblerPoints->setText(QString::number(player->getStat(LanguageAssembler)));
    ui->label_CPoints->setText(QString::number(player->getStat(LanguageC)));
    ui->label_CSharpPoints->setText(QString::number(player->getStat(LanguageCsharp)));
    ui->label_CppPoints->setText(QString::number(player->getStat(LanguageCpp)));
    ui->label_GoPoints->setText(QString::number(player->getStat(LanguageGoLang)));
    ui->label_HaskellPoints->setText(QString::number(player->getStat(LanguageHaskell)));
    ui->label_JavaPoints->setText(QString::number(player->getStat(LanguageJava)));
    ui->label_JavaScriptPoints->setText(QString::number(player->getStat(LanguageJavaScript)));
    ui->label_MatLabPoints->setText(QString::number(player->getStat(LanguageMatLab)));
    ui->label_ObjectiveCPoints->setText(QString::number(player->getStat(LanguageObjectiveC)));
    ui->label_PHPPoints->setText(QString::number(player->getStat(LanguagePHP)));
    ui->label_PerlPoints->setText(QString::number(player->getStat(LanguagePerl)));
    ui->label_PythonPoints->setText(QString::number(player->getStat(LanguagePython)));
    ui->label_RPoints->setText(QString::number(player->getStat(LanguageR)));
    ui->label_RubyPoints->setText(QString::number(player->getStat(LanguageRuby)));
    ui->label_SQLPoints->setText(QString::number(player->getStat(LanguageSQL)));
    ui->label_SwiftPoints->setText(QString::number(player->getStat(LanguageSwift)));
    ui->label_VBAPoints->setText(QString::number(player->getStat(LanguageVBA)));
    ui->label_OtherPoints->setText(QString::number(player->getStat(LanguageOthers)));

    tempTalent = player->getStat(LanguageTalent);
}

void NewGameForm::getPointFromOthers()
{
    int i = ui->label_OtherPoints->text().toInt();
    if(i==0){
        return;
    }

    --i;
    ui->label_OtherPoints->setText(QString::number(i));
}

void NewGameForm::putPointOnOthers()
{
    int i = ui->label_OtherPoints->text().toInt();
    ++i;
    ui->label_OtherPoints->setText(QString::number(i));
}

bool NewGameForm::isLeftPoint()
{
    if(ui->label_OtherPoints->text().toInt()==0){
        return false;
    }
    else
        return true;
}
