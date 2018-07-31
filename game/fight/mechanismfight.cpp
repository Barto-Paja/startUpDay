#include "mechanismfight.h"

MechanismFight::MechanismFight()
{

}

void MechanismFight::loadPlayers()
{
    for(int i=0;i<6;++i){
        robots.insert(i,&Bot);
    }

}
