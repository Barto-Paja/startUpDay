#ifndef MECHANISMFIGHT_H
#define MECHANISMFIGHT_H

#include "robot.h"

#include <QTimer>
#include <QVector>
#include <future>

class MechanismFight
{
public:
    MechanismFight() = delete;
    MechanismFight(bool withBots=true);

    void loadGameBots();
    bool newGame();

private:
    QVector<Robot> robots;

    void loadPlayers();

    // Game Session

    bool gameIsNotOver;
    int currentPlayer;
    int lastPlayer;
    int round;

    QTimer timeTour;
};

#endif // MECHANISMFIGHT_H
