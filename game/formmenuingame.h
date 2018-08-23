#ifndef FORMMENUINGAME_H
#define FORMMENUINGAME_H

#include <QWidget>

#include "character.h"

namespace Ui {
class FormMenuInGame;
}

class FormMenuInGame : public QWidget
{
    Q_OBJECT

public:
    explicit FormMenuInGame(QWidget *parent = nullptr);
    ~FormMenuInGame();

protected:
    void showEvent(QShowEvent *event);

private:
    Ui::FormMenuInGame *ui;

    Character *player;
};

#endif // FORMMENUINGAME_H
