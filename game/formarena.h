#ifndef FORMARENA_H
#define FORMARENA_H

#include <QWidget>
#include <QDebug>

#include "fight/mechanismfight.h"
#include "robot.h"
#include "character.h"

namespace Ui {
class FormArena;
}

class FormArena : public QWidget
{
    Q_OBJECT

public:
    explicit FormArena(QWidget *parent = nullptr);
    ~FormArena();
protected:

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::FormArena *ui;
    void makeMirrorLookTeam();

    QVector<Robot> robots;
    QVector<Character> players;
};

#endif // FORMARENA_H
