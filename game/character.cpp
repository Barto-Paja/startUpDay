#include "character.h"

Character::Character()
{
   queryManager = new QueryStatsManager();
   queryChar = new QueryCharacter();
}

Character::~Character()
{
    Stats.clear();
    delete queryManager;
    delete queryChar;
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

void Character::setStats(int statisticValue)
{
    Stats.append(std::move(statisticValue));
}

void Character::sendNewStats()
{
    queryManager->setStats(Stats);
}

int Character::getStat(Language_t type)
{
    queryManager->getStat();
    return queryManager->showStat(type);
}

QString Character::getPersonalityName(Character_t type)
{
    return queryChar->getPersonalityName(std::move(type));
}

void Character::setName(QString name)
{
    queryChar->updateNickName(name);
}

QString Character::getName()
{
    return queryChar->showNickName();
}
