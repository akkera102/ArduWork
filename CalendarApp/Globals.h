#ifndef Globals_h
#define Globals_h

#define XOFFSET_FOR_DAYS  18
#define OFFSET_LEFT       3

#define EEPROM_NO_ENTRY   0
#define EEPROM_NOTES_MAX  45
#define EEPROM_BLOCK_SIZE 18

bool keyInEEPROM = true;
bool dateHasNote[31];
uint16_t eepromRegister[EEPROM_NOTES_MAX];

// this is also the eeprom key
const uint8_t eepromCalenderKey[] PROGMEM  = {"CalenderApp"};
#define EEPROM_KEY_LEN   11

#define EEPROM_START_DATE     EEPROM_STORAGE_SPACE_START
#define EEPROM_START_PASSWORD (EEPROM_START_DATE + 3)
#define EEPROM_START_REGISTER (EEPROM_START_PASSWORD + EEPROM_KEY_LEN)
#define EEPROM_START_BLOCKS   (EEPROM_START_REGISTER + EEPROM_NOTES_MAX * sizeof(uint16_t))

const uint8_t daysPerMonth [] PROGMEM = {
  31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

enum class CalenderMode {
  TITLESCREEN,
  YEARS_AND_MONTH,
  ALL_DAYS,
  NOTES_VIEW,
  NOTES_EDIT
};

CalenderMode cMode = CalenderMode::TITLESCREEN;

enum {
  JAN, FEB, MAR, APR, MAI, JUN, JUL, AUG, SEP, OKT, NOV, DEZ
};

enum {
  MON, TUE, WED, THU, FRI, SAT, SUN
};

#define TASTATUR_COLUMNS  14
#define TASTATUR_ROWS     4
const uint8_t tastaturSmallLetters [] PROGMEM = {
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', '+', '1', '2', '3', uint8_t(extraFont6x6::ARROW_LEFF),
  'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', '-', '4', '5', '6', uint8_t(extraFont6x6::ARROW_UP),
  's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '=', '7', '8', '9'
};

const uint8_t tastaturBigLetters [] PROGMEM = {
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', '.', ',', '?', '!', uint8_t(extraFont6x6::ARROW_LEFF),
  'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', '*', '/', '<', '>', uint8_t(extraFont6x6::ARROW_DOWN),
  'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '@', '"', '(', ')'
};

const uint8_t namesOfTheMonths [] PROGMEM = {
  'J', 'a', 'n', 'u', 'a', 'r', 'y', '\0', ' ',
  'F', 'e', 'b', 'r', 'u', 'a', 'r', 'y', '\0',
  'M', 'a', 'r', 'c', 'h', '\0', ' ', ' ', ' ',
  'A', 'p', 'r', 'i', 'l', '\0', ' ', ' ', ' ',
  'M', 'a', 'i', '\0', ' ', ' ', ' ', ' ', ' ',
  'J', 'u', 'n', 'e', '\0', ' ', ' ', ' ', ' ',
  'J', 'u', 'l', 'i', '\0', ' ', ' ', ' ', ' ',
  'A', 'u', 'g', 'u', 's', 't', '\0', ' ', ' ',
  'S', 'e', 'p', 't', 'e', 'm', 'b', 'e', 'r',
  'O', 'k', 't', 'o', 'b', 'e', 'r', '\0', ' ',
  'N', 'o', 'v', 'e', 'm', 'b', 'e', 'r', '\0',
  'D', 'e', 'c', 'e', 'm', 'b', 'e', 'r', '\0',
};

// 'titleScreen', 110x44px
const uint8_t titleScreen [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x80, 0x00, 0xfc, 0x02,
  0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xea, 0xda, 0xba, 0x6a, 0xda, 0xba, 0xfa, 0x02,
  0xfc, 0x00, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x30,
  0x08, 0x06, 0x83, 0x82, 0x01, 0x31, 0x51, 0x31, 0x01, 0x82, 0x83, 0x04, 0x1f, 0x20, 0xef, 0x2f,
  0x2f, 0x2f, 0x2f, 0x4f, 0x8f, 0x2f, 0x8f, 0x4f, 0x2f, 0x2f, 0x2e, 0x2f, 0xef, 0x20, 0x1f, 0x84,
  0x83, 0x82, 0x01, 0x31, 0x29, 0x31, 0x01, 0x02, 0x83, 0x06, 0x08, 0x30, 0xc0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 0x18, 0x20, 0x40,
  0x83, 0x82, 0x01, 0x18, 0x14, 0x18, 0x01, 0xc2, 0x23, 0x90, 0xc8, 0x68, 0x6f, 0xc8, 0x96, 0x22,
  0xc6, 0x80, 0xbf, 0xa0, 0xbf, 0x80, 0xc6, 0x26, 0x92, 0xc8, 0x6f, 0x68, 0xc8, 0x93, 0x22, 0xc3,
  0x00, 0x28, 0x10, 0x28, 0x00, 0x81, 0x82, 0x41, 0x20, 0x18, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x01, 0x81, 0x41, 0x21, 0x1b, 0x04, 0x09, 0x13, 0x16, 0x16, 0x13, 0x09, 0x04, 0x03, 0x04,
  0x07, 0x04, 0x07, 0x04, 0x03, 0x04, 0x09, 0x13, 0x16, 0x16, 0x13, 0x09, 0x04, 0x1b, 0x21, 0x41,
  0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xff, 0xff, 0x03, 0x03, 0x03, 0x03,
  0x0f, 0x0f, 0x0c, 0x0c, 0x00, 0x00, 0xfc, 0xfc, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff,
  0xfc, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x08, 0x08, 0x08, 0x08, 0x04, 0x04, 0x02,
  0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff,
  0xff, 0xff, 0x03, 0x0b, 0x0b, 0x03, 0xff, 0xff, 0xfc, 0xfc, 0x00, 0x00, 0xfc, 0xfc, 0xff, 0xff,
  0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xfc, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3,
  0xc3, 0xc3, 0xff, 0xff, 0x3c, 0x3c, 0x03, 0x03, 0x0f, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0f, 0x0f,
  0x03, 0x03, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f,
  0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00,
  0x0f, 0x0f, 0x0f, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x0f, 0x0f,
  0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f,
  0x0c, 0x0c, 0x0c, 0x0c, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x03, 0x03,
  0x0f, 0x0f, 0x0c, 0x0c
};


#endif