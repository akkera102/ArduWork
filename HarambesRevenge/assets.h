#ifndef ASSETS_H
#define ASSETS_H

// harambe.png
// 8x8
PROGMEM const unsigned char harambe[] = {
// width, height
8, 8,
0x7F, 0xF5, 0xD1, 0xFD, 0xDD, 0xF1, 0xF5, 0x7F

};


// harambeRight.png
// 8x8
PROGMEM const unsigned char harambeRight[] = {
// width, height
8, 8,
0x7F, 0xF5, 0xF1, 0xDD, 0xFD, 0xD1, 0xF5, 0x7F

};


// snake.png
// 8x8
PROGMEM const unsigned char snake[] = {
// width, height
8, 8,
0x22, 0x53, 0x8B, 0x8A, 0x8A, 0x92, 0x92, 0x4C
};


 // snakeRight.png
// 8x8
PROGMEM const unsigned char snakeRight[] = {
// width, height
8, 8,
0x4C, 0x92, 0x92, 0x8A, 0x8A, 0x8B, 0x53, 0x22
};


// keeper.png
// 8x8
PROGMEM const unsigned char keeper[] = {
// width, height
8, 8,
0x04, 0x7E, 0xEE, 0xBF, 0xAF, 0xBF, 0xFE, 0x04

};


// keeperRight.png
// 8x8
PROGMEM const unsigned char keeperRight[] = {
// width, height
8, 8,
0x04, 0xFE, 0xBF, 0xAF, 0xBF, 0xEE, 0x7E, 0x04

};


// tankDown.png
// 8x8
PROGMEM const unsigned char tankDown[] = {
// width, height
8, 8,
0xFF, 0xC3, 0x1C, 0xEE, 0xE6, 0x1C, 0xC3, 0xFF
};

// tankLeft.png
// 8x8
PROGMEM const unsigned char tankLeft[] = {
// width, height
8, 8,
0xDB, 0xDB, 0x99, 0xAD, 0xA5, 0xBD, 0xDB, 0xC3
};


// tankRight.png
// 8x8
PROGMEM const unsigned char tankRight[] = {
// width, height
8, 8,
0xC3, 0xDB, 0xBD, 0xAD, 0xA5, 0x99, 0xDB, 0xDB
};

// tankUp.png
// 8x8
PROGMEM const unsigned char tankUp[] = {
// width, height
8, 8,
0xFF, 0xC3, 0x38, 0x6F, 0x67, 0x38, 0xC3, 0xFF
};


// stairs.png
// 8x8
PROGMEM const unsigned char stairs[] = {
// width, height
8, 8,
0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA8, 0xA0, 0x80

};


// harambeEyes.png 87,29
// 22x2
PROGMEM const unsigned char harambeEyes[] = {
// width, height
22, 2,
0x03, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 
0x00, 0x01

};

// start.png
// 128x64
PROGMEM const unsigned char start[] = {
// width, height
128, 64,
0xFF, 0x01, 0x01, 0x01, 0x9F, 0x9F, 0x01, 0x01, 0x01, 0xFF, 
0xFF, 0x1F, 0x01, 0x81, 0xF9, 0x81, 0x01, 0x1F, 0xFF, 0xFF, 
0x01, 0x01, 0x01, 0x99, 0x99, 0x01, 0x01, 0x43, 0xFF, 0xFF, 
0x1F, 0x01, 0x81, 0xF9, 0x81, 0x01, 0x1F, 0xFF, 0xFF, 0x01, 
0x01, 0x01, 0xE1, 0x07, 0x3F, 0x07, 0xE1, 0x01, 0x01, 0x01, 
0xFF, 0x01, 0x01, 0x01, 0x99, 0x99, 0x01, 0x21, 0x23, 0xFF, 
0x01, 0x01, 0x01, 0x99, 0x99, 0xFF, 0xF1, 0xF1, 0xF9, 0xFF, 
0xC3, 0x81, 0x81, 0x19, 0x01, 0x21, 0x63, 0xFF, 0xFF, 0xFF, 
0xFF, 0x7F, 0x7F, 0x6F, 0xB7, 0xBF, 0x5F, 0xD7, 0xC7, 0xD7, 
0xD7, 0xCB, 0xCF, 0xCF, 0xE1, 0xE1, 0xE1, 0xE1, 0xC3, 0xD3, 
0xF3, 0xE7, 0xEF, 0xCF, 0xEF, 0x47, 0xC7, 0xC4, 0xC7, 0xC3, 
0xB7, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x10, 
0x10, 0x10, 0x9F, 0x9F, 0x10, 0x10, 0x30, 0xFF, 0x13, 0x10, 
0x10, 0x9C, 0x9C, 0xFC, 0x10, 0x10, 0x13, 0xFF, 0xF0, 0xF0, 
0x10, 0x1F, 0x1F, 0xF0, 0x10, 0x10, 0x1F, 0x93, 0x90, 0xF0, 
0xFC, 0x1C, 0x1C, 0x10, 0x70, 0xF3, 0x1F, 0x10, 0x10, 0xF0, 
0x3F, 0x10, 0x10, 0x90, 0x9F, 0x10, 0x30, 0x30, 0xFF, 0x10, 
0x10, 0x10, 0x93, 0x93, 0xF0, 0xF0, 0xF8, 0xFF, 0xF0, 0xF0, 
0xF0, 0xF3, 0xF3, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF0, 
0xF0, 0xF3, 0xF0, 0xF0, 0xF8, 0xEF, 0x2B, 0xF9, 0x74, 0x36, 
0x16, 0x16, 0x07, 0x0B, 0x0F, 0x06, 0x07, 0x07, 0x07, 0x0F, 
0x07, 0x01, 0x03, 0x03, 0x01, 0x03, 0x03, 0x01, 0x01, 0x01, 
0x03, 0x03, 0x03, 0x03, 0x0D, 0x05, 0x07, 0x77, 0x2E, 0x0E, 
0x75, 0x58, 0xEA, 0xEF, 0xCF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
0xF9, 0xF9, 0x00, 0x00, 0x04, 0xFF, 0x00, 0x00, 0x00, 0x39, 
0x39, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0xE0, 
0xFF, 0xFF, 0x00, 0x00, 0x00, 0x39, 0x39, 0x3F, 0xFF, 0x00, 
0x00, 0x00, 0xF8, 0xC3, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 
0x00, 0x3F, 0x33, 0x82, 0x02, 0x02, 0xFF, 0x00, 0x00, 0x00, 
0x39, 0x39, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 
0xFB, 0x12, 0x6A, 0xE2, 0xFA, 0xFA, 0xFC, 0xE0, 0x80, 0xF0, 
0xF0, 0xF8, 0xF0, 0xFC, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 
0xF8, 0xE8, 0xFC, 0xFC, 0xFC, 0xF8, 0x7C, 0xFC, 0xF8, 0xF0, 
0xF8, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xE1, 0xF0, 0xC9, 
0xE9, 0xC8, 0x9B, 0xFF, 0x9E, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x93, 0xA5, 0xE6, 
0x7C, 0xCF, 0x03, 0x07, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x02, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x1B, 
0x0F, 0x3F, 0xF3, 0xBE, 0xEE, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0xC7, 0x47, 0x05, 0x05, 0x01, 
0x0C, 0x60, 0x00, 0x00, 0x80, 0x00, 0x07, 0x07, 0x16, 0x16, 
0x1C, 0x1E, 0xF8, 0x6E, 0xF4, 0xF8, 0xFF, 0xFF, 0xFF, 0xFC, 
0xFC, 0x70, 0x5E, 0xFC, 0xEC, 0xC6, 0xE8, 0x60, 0x08, 0x10, 
0x0C, 0x04, 0x06, 0x04, 0x00, 0x00, 0x00, 0x44, 0x60, 0x48, 
0x36, 0x1F, 0xFF, 0x87, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xBF, 
0xBF, 0x9F, 0xBF, 0x27, 0x4B, 0x2F, 0x27, 0x4F, 0xE3, 0x77, 
0xFB, 0xBB, 0xFD, 0xE6, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 
0x3F, 0x7F, 0x3F, 0x6F, 0x07, 0xDF, 0x0F, 0x27, 0xEB, 0xFF, 
0xBF, 0xFF, 0xFF, 0xF9, 0xDC, 0xF5, 0x40, 0x22, 0x82, 0x02, 
0x81, 0xC0, 0x44, 0x03, 0x10, 0x00, 0x00, 0x00, 0x80, 0x70, 
0xFE, 0xFF, 0xE7, 0x87, 0x07, 0x0F, 0x0F, 0x1F, 0x3F, 0x1F, 
0x0F, 0x0F, 0x87, 0xE7, 0xFF, 0xF8, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x40, 0x82, 0x20, 0xE8, 0x20, 0x00, 0x80, 0xC4, 0xBF, 
0xFE, 0xC7, 0x7E, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0x7F, 0x7B, 0x0F, 0x11, 0x47, 0x01, 0x04, 0x08, 0x04, 0x01, 
0x01, 0x03, 0x6E, 0x5C, 0x3A, 0xB2, 0x2F, 0xDF, 0xDF, 0xBF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xBB, 0xFD, 0x37, 0xBB, 0x4A, 
0xB2, 0xDC, 0x7E, 0x1A, 0x60, 0x3E, 0x1F, 0x5F, 0x5F, 0xE9, 
0x0F, 0xDF, 0x57, 0xFF, 0x7D, 0x80, 0x00, 0x40, 0x02, 0x00, 
0x00, 0x00, 0x20, 0x38, 0x7C, 0x3F, 0x3F, 0x0F, 0xA8, 0x37, 
0x1F, 0xDF, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0x8F, 
0x9F, 0x0F, 0x0F, 0x5B, 0x3F, 0x3F, 0x3C, 0x70, 0x00, 0x00, 
0x03, 0x00, 0x80, 0x45, 0x80, 0x2F, 0xFF, 0x3F, 0x5F, 0xA3, 
0xD1, 0xFF, 0x1F, 0x6F, 0x6F, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x3F, 0x5F, 0x07, 0x15, 0x40, 0x00, 0x00, 
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x10, 0x00, 0x00, 0x01, 0x23, 0x89, 0x3F, 0x7B, 0xDD, 
0x1D, 0x7F, 0x1F, 0x2F, 0x3B, 0x1C, 0x3B, 0x0A, 0x03, 0x02, 
0x04, 0x00, 0x00, 0xC0, 0x80, 0xA0, 0xE0, 0xFB, 0xE1, 0xF1, 
0xFC, 0xDF, 0x76, 0x7C, 0x9C, 0x38, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x06, 0x02, 0x04, 0x05, 0x04, 0x04, 0x04, 
0x04, 0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
0x00, 0x08, 0x08, 0x0C, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x02, 0x01, 0x0C, 0x0B, 0x02, 0x01, 0x00, 0x0C, 0x01, 
0x00, 0x00, 0x02, 0x01

};


// production
// 128x64
PROGMEM const unsigned char production[] = {
// width, height
128, 64,
0xFF, 0x01, 0x01, 0x01, 0x9F, 0x9F, 0x01, 0x01, 0x01, 0xFF, 
0xFF, 0x1F, 0x01, 0x81, 0xF9, 0x81, 0x01, 0x1F, 0xFF, 0xFF, 
0x01, 0x01, 0x01, 0x99, 0x99, 0x01, 0x01, 0x43, 0xFF, 0xFF, 
0x1F, 0x01, 0x81, 0xF9, 0x81, 0x01, 0x1F, 0xFF, 0xFF, 0x01, 
0x01, 0x01, 0xE1, 0x07, 0x3F, 0x07, 0xE1, 0x01, 0x01, 0x01, 
0xFF, 0x01, 0x01, 0x01, 0x99, 0x99, 0x01, 0x21, 0x23, 0xFF, 
0x01, 0x01, 0x01, 0x99, 0x99, 0xFF, 0xF1, 0xF1, 0xF9, 0xFF, 
0xC3, 0x81, 0x81, 0x19, 0x01, 0x21, 0x63, 0xFF, 0xFF, 0xFF, 
0xFF, 0x7F, 0x7F, 0x6F, 0xB7, 0xBF, 0x5F, 0xD7, 0xC7, 0xD7, 
0xD7, 0xCB, 0xCF, 0xCF, 0xE1, 0xE1, 0xE1, 0xE1, 0xC3, 0xD3, 
0xF3, 0xE7, 0xEF, 0xCF, 0xEF, 0x47, 0xC7, 0xC4, 0xC7, 0xC3, 
0xB7, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x10, 
0x10, 0x10, 0x9F, 0x9F, 0x10, 0x10, 0x30, 0xFF, 0x13, 0x10, 
0x10, 0x9C, 0x9C, 0xFC, 0x10, 0x10, 0x13, 0xFF, 0xF0, 0xF0, 
0x10, 0x1F, 0x1F, 0xF0, 0x10, 0x10, 0x1F, 0x93, 0x90, 0xF0, 
0xFC, 0x1C, 0x1C, 0x10, 0x70, 0xF3, 0x1F, 0x10, 0x10, 0xF0, 
0x3F, 0x10, 0x10, 0x90, 0x9F, 0x10, 0x30, 0x30, 0xFF, 0x10, 
0x10, 0x10, 0x93, 0x93, 0xF0, 0xF0, 0xF8, 0xFF, 0xF0, 0xF0, 
0xF0, 0xF3, 0xF3, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF0, 
0xF0, 0xF3, 0xF0, 0xF0, 0xF8, 0xEF, 0x2B, 0xF9, 0x74, 0x36, 
0x16, 0x16, 0x07, 0x0B, 0x0F, 0x06, 0x07, 0x07, 0x07, 0x0F, 
0x07, 0x01, 0x03, 0x03, 0x01, 0x03, 0x03, 0x01, 0x01, 0x01, 
0x03, 0x03, 0x03, 0x03, 0x0D, 0x05, 0x07, 0x77, 0x2E, 0x0E, 
0x75, 0x58, 0xEA, 0xEF, 0xCF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
0xF9, 0xF9, 0x00, 0x00, 0x04, 0xFF, 0x00, 0x00, 0x00, 0x39, 
0x39, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0xE0, 
0xFF, 0xFF, 0x00, 0x00, 0x00, 0x39, 0x39, 0x3F, 0xFF, 0x00, 
0x00, 0x00, 0xF8, 0xC3, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 
0x00, 0x3F, 0x33, 0x82, 0x02, 0x02, 0xFF, 0x00, 0x00, 0x00, 
0x39, 0x39, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 
0xFB, 0x12, 0x6A, 0xE2, 0xFA, 0xFA, 0xFC, 0xE0, 0x80, 0xF0, 
0xF0, 0xF8, 0xF0, 0xFC, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 
0xF8, 0xE8, 0xFC, 0xFC, 0xFC, 0xF8, 0x7C, 0xFC, 0xF8, 0xF0, 
0xF8, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xE1, 0xF0, 0xC9, 
0xE9, 0xC8, 0x9B, 0xFF, 0x9E, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x93, 0xA5, 0xE6, 
0x7C, 0xCF, 0x03, 0x07, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x02, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x1B, 
0x0F, 0x3F, 0xF3, 0xBE, 0xEE, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0xC7, 0x47, 0x05, 0x05, 0x01, 
0x0C, 0x60, 0x00, 0x00, 0x80, 0x00, 0x07, 0x07, 0x16, 0x16, 
0x1C, 0x1E, 0xF8, 0x6E, 0xF4, 0xF8, 0xFF, 0xFF, 0xFF, 0xFC, 
0xFC, 0x70, 0x5E, 0xFC, 0xEC, 0xC6, 0xE8, 0x60, 0x08, 0x10, 
0x0C, 0x04, 0x06, 0x04, 0x00, 0x00, 0x00, 0x44, 0x60, 0x48, 
0x36, 0x1F, 0xFF, 0x87, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xBF, 
0xBF, 0x9F, 0xBF, 0x27, 0x4B, 0x2F, 0x27, 0x4F, 0xE3, 0x77, 
0xFB, 0xBB, 0xFD, 0xE6, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 
0x3F, 0x7F, 0x3F, 0x6F, 0x07, 0xDF, 0x0F, 0x27, 0xEB, 0xFF, 
0xBF, 0xFF, 0xFF, 0xF9, 0xDC, 0xF5, 0x40, 0x22, 0x82, 0x02, 
0x81, 0xC0, 0x44, 0x03, 0x10, 0x00, 0x00, 0x00, 0x80, 0x70, 
0xFE, 0xFF, 0xE7, 0x87, 0x07, 0x0F, 0x0F, 0x1F, 0x3F, 0x1F, 
0x0F, 0x0F, 0x87, 0xE7, 0xFF, 0xF8, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x40, 0x82, 0x20, 0xE8, 0x20, 0x00, 0x80, 0xC4, 0xBF, 
0xFE, 0xC7, 0x7E, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0x7F, 0x7B, 0x0F, 0x11, 0x47, 0x01, 0x04, 0x08, 0x04, 0x01, 
0x01, 0x03, 0x6E, 0x5C, 0x3A, 0xB2, 0x2F, 0xDF, 0xDF, 0xBF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xBB, 0xFD, 0x37, 0xBB, 0x4A, 
0xB2, 0xDC, 0x7E, 0x1A, 0x60, 0x3E, 0x1F, 0x5F, 0x5F, 0xE9, 
0x0F, 0xDF, 0x57, 0xFF, 0x7D, 0x80, 0x00, 0x40, 0x02, 0x00, 
0x00, 0x00, 0x20, 0x38, 0x7C, 0x3F, 0x3F, 0x0F, 0xA8, 0x37, 
0x1F, 0xDF, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0x8F, 
0x9F, 0x0F, 0x0F, 0x5B, 0x3F, 0x3F, 0x3C, 0x70, 0x00, 0x00, 
0x03, 0x00, 0x80, 0x45, 0x80, 0x2F, 0xFF, 0x3F, 0x5F, 0xA3, 
0xD1, 0xFF, 0x1F, 0x6F, 0x6F, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x3F, 0x5F, 0x07, 0x15, 0x40, 0x00, 0x00, 
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x10, 0x00, 0x00, 0x01, 0x23, 0x89, 0x3F, 0x7B, 0xDD, 
0x1D, 0x7F, 0x1F, 0x2F, 0x3B, 0x1C, 0x3B, 0x0A, 0x03, 0x02, 
0x04, 0x00, 0x00, 0xC0, 0x80, 0xA0, 0xE0, 0xFB, 0xE1, 0xF1, 
0xFC, 0xDF, 0x76, 0x7C, 0x9C, 0x38, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x06, 0x02, 0x04, 0x05, 0x04, 0x04, 0x04, 
0x04, 0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
0x00, 0x08, 0x08, 0x0C, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x02, 0x01, 0x0C, 0x0B, 0x02, 0x01, 0x00, 0x0C, 0x01, 
0x00, 0x00, 0x02, 0x01

};


// tourist.png
// 8x8
PROGMEM const unsigned char tourist[] = {
// width, height
8, 8,
0x1C, 0x72, 0xF3, 0x9B, 0x9B, 0xF3, 0x72, 0x1C

};


// touristCalm.png
// 8x8
PROGMEM const unsigned char touristCalm[] = {
// width, height
8, 8,
0x1C, 0x72, 0xF3, 0xBB, 0xBB, 0xF3, 0x72, 0x1C

};


 // touristSmirk.png
// 8x8
PROGMEM const unsigned char touristSmirk[] = {
// width, height
8, 8,
0x1C, 0x72, 0xD3, 0xBB, 0xBB, 0xF3, 0x72, 0x1C

};


// touristZombie.png
// 8x8
PROGMEM const unsigned char touristZombie[] = {
// width, height
8, 8,
0x3E, 0x75, 0xD1, 0xDD, 0xDD, 0xD1, 0x75, 0x3E

};

const unsigned char * const helpGFX[] PROGMEM =
{
  &harambe[2],
  &touristCalm[2],
  &keeper[2],
  &stairs[2],
  &snake[2],
  &tankLeft[2]
};

#endif
