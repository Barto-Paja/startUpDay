#ifndef NEWGAMEFORM_H
#define NEWGAMEFORM_H

#include <QWidget>
#include "formsstackmanagement.h"

#include "character.h"

namespace Ui {
class NewGameForm;
}

class NewGameForm : public QWidget
{
    Q_OBJECT

public:
    explicit NewGameForm(QWidget *parent = 0);
    ~NewGameForm();
signals:
    void exitPanel();

protected:

    void showEvent(QEvent *event);

private slots:

    void on_pushButton_Next_clicked();

    void on_pushButton_AssemblerPointsUp_clicked();
    void on_pushButton_AssemblerPointsDown_clicked();
    void on_pushButton_CPointsUp_clicked();
    void on_pushButton_CPointsDown_clicked();
    void on_pushButton_CSharpPointsUp_clicked();
    void on_pushButton_CSharpPointsDown_clicked();
    void on_pushButton_CppPointsUp_clicked();
    void on_pushButton_CppPointsDown_clicked();
    void on_pushButton_GoPointsUp_clicked();
    void on_pushButton_GoPointsDown_clicked();
    void on_pushButton_HaskellPointsUp_clicked();
    void on_pushButton_HaskellPointsDown_clicked();
    void on_pushButton_JavaPointsUp_clicked();
    void on_pushButton_JavaPointsDown_clicked();
    void on_pushButton_JavaScriptsPointsUp_clicked();
    void on_pushButton_JavaScriptPointsDown_clicked();
    void on_pushButton_MatLabPointsUp_clicked();
    void on_pushButton_MatLabPointsDown_clicked();
    void on_pushButton_ObjectiveCPointsUp_clicked();
    void on_pushButton_ObjectiveCPointsDown_clicked();
    void on_pushButton_PerlPointsUp_clicked();
    void on_pushButton_PerlPointsDown_clicked();
    void on_pushButton_PHPPointsUp_clicked();
    void on_pushButton_PHPPointsDown_clicked();
    void on_pushButton_PythonPointsUp_clicked();
    void on_pushButton_PythonPointsDown_clicked();
    void on_pushButton_RPointsUp_clicked();
    void on_pushButton_RPointsDown_clicked();
    void on_pushButton_RubyPointsUp_clicked();
    void on_pushButton_RubyPointsDown_clicked();
    void on_pushButton_SQLPointsUp_clicked();
    void on_pushButton_SQLPointsDown_clicked();
    void on_pushButton_SwiftPointsUp_clicked();
    void on_pushButton_SwiftPointsDown_clicked();
    void on_pushButton_VBAPointsUp_clicked();
    void on_pushButton_VBAPointsDown_clicked();

    void on_pushButton_TalentLevelUp_clicked();
    void on_pushButton_TalentLevelDown_clicked();

    void on_pushButton_ResetAddedPoints_clicked();

private:
    Ui::NewGameForm *ui;
    Character *player;

    void loadLanguages();
};

#endif // NEWGAMEFORM_H
