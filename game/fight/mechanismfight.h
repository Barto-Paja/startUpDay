#ifndef MECHANISMFIGHT_H
#define MECHANISMFIGHT_H

#include "bot.h"

#include <QVector>

class MechanismFight
{
public:
    MechanismFight();

private:
    QVector<Bot> robots;

    void loadPlayers();
};

#endif // MECHANISMFIGHT_H
