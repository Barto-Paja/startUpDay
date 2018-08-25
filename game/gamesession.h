#ifndef GAMESESSION_H
#define GAMESESSION_H

#include <QString>
#include <QVector>

#include "robot.h"

class GameSession
{
public:
    GameSession();

private:

    QVector<Robot> players;
    bool gameSessionEnd;

    bool loadPlayers();

};

#endif // GAMESESSION_H
