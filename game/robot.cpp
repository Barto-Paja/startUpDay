#include "robot.h"

Robot::Robot()
{
    //queryManager = new QueryStatsManager();
}

bool Robot::loadRobot(int idPlayer)
{
    DataBaseManagementLite::query.prepare("SELECT * FROM Robot WHERE ID_Player = :idplayer LIMIT 1");
    DataBaseManagementLite::query.bindValue(":idplayer",idPlayer);

    if(!DataBaseManagementLite::query.exec() || !DataBaseManagementLite::query.next()){
        qDebug() << "Error: Query Failed";
        return false;
    }

    this->setName(DataBaseManagementLite::query.value(ColumnRobot_Name).toString());
    this->setHP(DataBaseManagementLite::query.value(ColumnRobot_HitPoints).toInt());
    this->setDamage(DataBaseManagementLite::query.value(ColumnRobot_RobotStatDamage).toInt());
    this->setShield(DataBaseManagementLite::query.value(ColumnRobot_RobotStatShield).toInt());
    this->setMovement(DataBaseManagementLite::query.value(ColumnRobot_RobotStatMovement).toInt());
    this->setEnergy(DataBaseManagementLite::query.value(ColumnRobot_RobotStatEnergy).toInt());
    this->setEnergyLoad(DataBaseManagementLite::query.value(ColumnRobot_RobotStatCharging).toInt()); // Charging
    this->setExpierience(DataBaseManagementLite::query.value(ColumnRobot_RobotStatOthers).toInt());

    // jeszcze
    // superskill
    // passiveskill

    this->setPlayerID(DataBaseManagementLite::query.value(ColumnRobot_PlayerID).toInt());

    if(this->playerID!=0){
        return true;
    }else{
        return false;
    }
}

int Robot::getStat(RobotStat_t type)
{
    queryManager->getRobotStats();
    return queryManager->showStat(type);
}
