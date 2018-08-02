#include "character.h"

Character::Character()
{
   queryManager = new QueryStatsManager();
}

Character::~Character()
{
    delete queryManager;
}

void Character::setNature()
{

}

void Character::setMorals(int value)
{

}

void Character::setCondition()
{

}

void Character::setTalent(int talent)
{

}

void Character::setSpecialty()
{

}

void Character::setHero()
{

}

void Character::setSalary()
{

}

int Character::getStat(Language_t type)
{
    queryManager->getStat();
    return queryManager->showStat(type);
}
