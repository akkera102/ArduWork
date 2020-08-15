#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include "GameMath.h"

typedef struct
{
  uint8_t index;
  char initials[3];
  uint8_t stage;
  uint16_t score;
  uint8_t crc;
} HighScoreEntry;


void ReadHighScore(HighScoreEntry &tScore)
{
  memset(&tScore, 0, sizeof(HighScoreEntry));


  if(EEPROM.read(EEPROM_STORAGE_SPACE_START + 0) != 'A') return;
  if(EEPROM.read(EEPROM_STORAGE_SPACE_START + 1) != 'S') return;
  if(EEPROM.read(EEPROM_STORAGE_SPACE_START + 2) != 'T') return;


  int8_t* p = (int8_t*)&tScore;
  for(int16_t i=0; i<sizeof(HighScoreEntry); i++)
  {
    p[i] = EEPROM.read(EEPROM_STORAGE_SPACE_START + 3 + i);
  }
}

void WriteHighScore(HighScoreEntry &tScore)
{
  EEPROM.write(EEPROM_STORAGE_SPACE_START + 0, 'A');
  EEPROM.write(EEPROM_STORAGE_SPACE_START + 1, 'S');
  EEPROM.write(EEPROM_STORAGE_SPACE_START + 2, 'T');


  int8_t* p = (int8_t*)&tScore;
  for(int16_t i=0; i<sizeof(HighScoreEntry); i++)
  {
    EEPROM.write(EEPROM_STORAGE_SPACE_START + 3 + i, p[i]);
  }
}

#endif //HIGHSCORE_H
