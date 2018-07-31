#ifndef NEWGAMEFORM_H
#define NEWGAMEFORM_H

#include <QWidget>
#include "formsstackmanagement.h"

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
private slots:
    void on_pushButton_Next_clicked();

    void on_pushButton_AssemblerPointsUp_clicked();

private:
    Ui::NewGameForm *ui;
};

#endif // NEWGAMEFORM_H
