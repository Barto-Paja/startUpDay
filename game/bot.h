#ifndef BOT_H
#define BOT_H

#include <QString>

class Bot
{
public:
    Bot();

private:
    int hp;
    int shield;
    int dmg;
    int movement;
    int energy;
    int energyLoad;

    QString specialMove;
    QString passive;

    int cost;
};

#endif // BOT_H
