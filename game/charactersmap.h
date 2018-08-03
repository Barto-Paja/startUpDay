#ifndef CHARACTERSMAP_H
#define CHARACTERSMAP_H

/* Info source
 *
 * https://www.16personalities.com/pl/typy-osobowosci
 *
 */

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

}Character_t;

#endif // CHARACTERSMAP_H
