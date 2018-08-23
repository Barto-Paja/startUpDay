#ifndef FORMNEWROBOT_H
#define FORMNEWROBOT_H

#include <QWidget>
#include "statisticsmap.h"
#include "robot.h"

namespace Ui {
class FormNewRobot;
}

class FormNewRobot : public QWidget
{
    Q_OBJECT

public:
    explicit FormNewRobot(QWidget *parent = nullptr);
    ~FormNewRobot();

signals:
    void exitPanel();

protected:

    void ShowEvent(QShowEvent *event);

private slots:

    void on_pushButton_Next_clicked();

    void on_pushButton_StrenghtPointUp_clicked();
    void on_pushButton_StrenghtPointDown_clicked();
    void on_pushButton_DamagePointUp_clicked();
    void on_pushButton_DamagePointDown_clicked();
    void on_pushButton_ShieldPointUp_clicked();
    void on_pushButton_ShieldPointDown_clicked();
    void on_pushButton_MovementPointUp_clicked();
    void on_pushButton_MovementPointDown_clicked();
    void on_pushButton_ChargingPointUp_clicked();
    void on_pushButton_ChargingPointDown_clicked();
    void on_pushButton_EnergyPointUp_clicked();
    void on_pushButton_EnergyPointDown_clicked();

    void on_pushButton_ResetPoints_clicked();

private:
    Ui::FormNewRobot *ui;
    Robot *robot;

    void loadStats();

    void getPointFromOthers();
    void putPointOnOthers();
    bool isLeftPoint();

};

#endif // FORMNEWROBOT_H
