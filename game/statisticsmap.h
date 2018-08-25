#ifndef STATISTICSMAP_H
#define STATISTICSMAP_H

typedef enum {
    LanguageAssembler = 2,
    LanguageC,
    LanguageCsharp,
    LanguageCpp,
    LanguageGoLang,
    LanguageHaskell,
    LanguageJava,
    LanguageJavaScript,
    LanguageMatLab,
    LanguageObjectiveC,
    LanguagePerl,
    LanguagePHP,
    LanguagePython,
    LanguageR,
    LanguageRuby,
    LanguageSQL,
    LanguageSwift,
    LanguageVBA,
    LanguageOthers,
    LanguageTalent
}Language_t;

typedef enum{
    RobotStatStrenght=2,
    RobotStatDamage,
    RobotStatShield,
    RobotStatMovement,
    RobotStatCharging,
    RobotStatEnergy,
    RobotStatOthers
}RobotStat_t;

typedef enum{
    TeamRed=0,
    TeamBlue
}Team_t;

#endif // STATISTICSMAP_H
