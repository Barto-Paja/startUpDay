#ifndef FORMCHARACTER_H
#define FORMCHARACTER_H

#include <QWidget>

namespace Ui {
class FormCharacter;
}

class FormCharacter : public QWidget
{
    Q_OBJECT

public:
    explicit FormCharacter(QWidget *parent = 0);
    ~FormCharacter();

private:
    Ui::FormCharacter *ui;
};

#endif // FORMCHARACTER_H
