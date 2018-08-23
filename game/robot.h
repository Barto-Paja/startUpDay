#ifndef ROBOT_H
#define ROBOT_H

#include <QString>
#include "statisticsmap.h"
#include "DataBase/querystatsmanager.h"
#include "DataBase/columns.h"


#include "databasemanagementlite.h"

class Robot
{
public:
    Robot();

    bool loadRobot(int idPlayer);

    void setHP(int value){hp=std::move(value);}
    void setShield(int value){shield=std::move(value);}
    void setDamage(int value){dmg=std::move(value);}
    void setMovement(int value){movement=std::move(value);}
    void setEnergy(int value){energy=std::move(value);}
    void setEnergyLoad(int value){energyLoad=std::move(value);}
    void setExpierience(int value){expierience=std::move(value);}
    void setCost(int value){cost=std::move(value);}
    void setName(QString value){name=std::move(value);}
    void setTeam(Team_t value){team=value;}
    void setPlayerID(int value){playerID=std::move(value);}

    int getStat(RobotStat_t type);

signals:

    void atack();
    void defence();
    void loadEnergy();


private:
    QueryStatsManager *queryManager;

    QString name;

    int hp;
    int shield;
    int dmg;
    int movement;
    int energy;
    int energyLoad;
    int expierience;

    Team_t team;

    QString specialMove;
    QString passive;

    int cost;
    int playerID;
};

#endif // ROBOT_H
