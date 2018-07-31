#ifndef FORMNEWROBOT_H
#define FORMNEWROBOT_H

#include <QWidget>

namespace Ui {
class FormNewRobot;
}

class FormNewRobot : public QWidget
{
    Q_OBJECT

public:
    explicit FormNewRobot(QWidget *parent = 0);
    ~FormNewRobot();

private:
    Ui::FormNewRobot *ui;
};

#endif // FORMNEWROBOT_H
