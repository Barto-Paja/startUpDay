#include "mechanismfight.h"

MechanismFight::MechanismFight(bool withBots)
{
    loadPlayers();
    if(withBots){
        loadGameBots();
    }


}

void MechanismFight::loadGameBots()
{
    for(int i=2;i<7;++i){
        robots[i].loadRobot(i);
    }
}

bool MechanismFight::newGame()
{
    gameIsNotOver = true;

    while(gameIsNotOver){



    }
}

void MechanismFight::loadPlayers()
{
    Robot robot;

    for(int i=0;i<6;++i){
        robots.insert(i,robot);
    }
}
