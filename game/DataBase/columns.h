#ifndef COLUMNS_H
#define COLUMNS_H

typedef  enum{
    ColumnPlayerID = 0,
    ColumnPlayerLogin,
    ColumnPlayerPassword,
    ColumnPlayerEmail,
    ColumnPlayerEloScore,
    ColumnPlayerisNewPlayer
} ColumnPlayer_t;

typedef enum{
    ColumnStatistics_ID = 0,
    ColumnStatistics_PlayerID,
    ColumnStatistics_LanguageAssembler,
    ColumnStatistics_LanguageC,
    ColumnStatistics_LanguageCsharp,
    ColumnStatistics_LanguageCpp,
    ColumnStatistics_LanguageGoLang,
    ColumnStatistics_LanguageHaskell,
    ColumnStatistics_LanguageJava,
    ColumnStatistics_LanguageJavaScript,
    ColumnStatistics_LanguageMatLab,
    ColumnStatistics_LanguageObjectiveC,
    ColumnStatistics_LanguagePerl,
    ColumnStatistics_LanguagePHP,
    ColumnStatistics_LanguagePython,
    ColumnStatistics_LanguageR,
    ColumnStatistics_LanguageRuby,
    ColumnStatistics_LanguageSQL,
    ColumnStatistics_LanguageSwift,
    ColumnStatistics_LanguageVBA,
    ColumnStatistics_LanguageOthers,
    ColumnStatistics_LanguageTalent
} ColumnStatistics_t;

typedef enum{
    ColumnRobot_ID = 0,
    ColumnRobot_Name,
    ColumnRobot_HitPoints,
    ColumnRobot_RobotStatDamage,
    ColumnRobot_RobotStatShield,
    ColumnRobot_RobotStatMovement,
    ColumnRobot_RobotStatCharging,
    ColumnRobot_RobotStatEnergy,
    ColumnRobot_RobotStatOthers, // EXP
    ColumnRobot_IDSuperSkill,
    ColumnRobot_ID_PassiveSkill,
    ColumnRobot_PlayerID
} ColumnRobot_t;

typedef enum{
    CharacterINTJ = 0, // Architekt
    CharacterINTP, // Logik
    CharacterENTJ, // Dowódca
    CharacterENTP, // Dyskutant
    CharacterINFJ, // Rzecznik
    CharacterINFP, // Pośrednik
    CharacterENFJ, // Protagonista
    CharacterENFP, // Działacz
    CharacterISTJ, // Logistyk
    CharacterISFJ, // Obrońca
    CharacterESTJ, // Wykonawca
    CharacterESFJ, // Doradca
    CharacterISTP, // Wirtuoz
    CharacterISFP, // Poszukiwacz Przygód
    CharacterESTP, // Przedsiębiorca
    CharacterESFP, // Animator
    CharacterLast
}Character_t; // Personalities

typedef enum{
    ColumnCharacterID = 0,
    ColumnCharacterName,
    ColumnCharacterMoral,
    ColumnCharacterCondition,
    ColumnCharacterSalary,
    ColumnCharacterIDPersonality,
    ColumnCharacterIDSpecialty,
    ColumnCharacterIDHero,
    ColumnCharacterIDPlayer

} ColumnCharacter_t;


#endif // COLUMNS_H
