#ifndef FORMGAMESTATES_H
#define FORMGAMESTATES_H

#include <QWidget>

namespace Ui {
class FormGameStates;
}

class FormGameStates : public QWidget
{
    Q_OBJECT

public:
    explicit FormGameStates(QWidget *parent = 0);
    ~FormGameStates();

private:
    Ui::FormGameStates *ui;
};

#endif // FORMGAMESTATES_H
