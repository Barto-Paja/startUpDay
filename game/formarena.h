#ifndef FORMARENA_H
#define FORMARENA_H

#include <QWidget>

namespace Ui {
class FormArena;
}

class FormArena : public QWidget
{
    Q_OBJECT

public:
    explicit FormArena(QWidget *parent = 0);
    ~FormArena();

private:
    Ui::FormArena *ui;
    void makeMirrorLookTeam();
};

#endif // FORMARENA_H
