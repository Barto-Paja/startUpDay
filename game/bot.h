#ifndef BOT_H
#define BOT_H

#include <QString>

class Bot
{
public:
    Bot();

    void setHP(int value){hp=std::move(value);}
    void setShield(int value){shield=std::move(value);}
    void setDamage(int value){dmg=std::move(value);}
    void setMovement(int value){movement=std::move(value);}
    void setEnergy(int value){energy=std::move(value);}
    void setEnergyLoad(int value){energyLoad=std::move(value);}
    void setExpierience(int value){expierience=std::move(value);}
    void setCost(int value){cost=std::move(value);}


private:
    int hp;
    int shield;
    int dmg;
    int movement;
    int energy;
    int energyLoad;
    int expierience;

    QString specialMove;
    QString passive;

    int cost;
};

#endif // BOT_H
