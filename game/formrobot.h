#ifndef FORMROBOT_H
#define FORMROBOT_H

#include <QWidget>

namespace Ui {
class FormRobot;
}

class FormRobot : public QWidget
{
    Q_OBJECT

public:
    explicit FormRobot(QWidget *parent = 0);
    ~FormRobot();

private:
    Ui::FormRobot *ui;
};

#endif // FORMROBOT_H
