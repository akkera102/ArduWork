 /*
  Fanboat
 Copyright (C) 2016 Richie 'Fanboat' Davidson
 I own everything. In fact, stop reading this. Give me your shoes.
 J/K I'm easy.
 Copyleft sharealike GNU whatever, I'm not a lawyer.
 fanboat@gmail.com
 */

#include "Arduboy.h"

Arduboy a;

const int boatMax = 57;//boundaries of travel for the boat to stay on screen
const int boatMin = 0;
int boatX;//boat position
int boatY;
int cY;//cursor
const int nGators = 3;//how many gators on screen at any time (max)
float gX[nGators];//positions of each gator
int gY[nGators];
int sX;//shield position
int sY;
int score;//how many gators dodged
int hiScore;//highest score recorded
bool check;//check EEPROM for data
int checkMenu = 0;//menu option to delete high score
int shield;//shield energy
bool shieldOn;
int lives;
bool mute = false;//bool what turns off sounds
byte buttonCurr;//buffers to ensure buttons aren't being re-pressed unintentionally
byte buttonBuffer;

void setup()
{
  a.begin();
  a.setFrameRate(60);
  a.display();
  check = checkData();
  if (check)
  {
    mute = getMute();
  }
  intro();
}

void intro()
{
  a.clear();

  //run these two first to jump straight into game
  //setupGame();
  //loop();
  
  displayLogoBig();
  delay(400);
  displayLogoSmall();
  delay(300);
  loadMenu();
  mainMenu();
}

void mainMenu()//
{
  while (!a.pressed(B_BUTTON))//while nothing is selected
  {
    buttonCurr = a.pressed(DOWN_BUTTON) || a.pressed(UP_BUTTON);
    if (a.pressed(DOWN_BUTTON) && buttonBuffer==0 && cY<(2+checkMenu))
    {
      if (!mute)
      {
        a.tunes.tone(987, 50);
      }
      cY++;
    }
    if (a.pressed(UP_BUTTON) && buttonBuffer==0 && cY>0)
    {
      if (!mute)
      {
        a.tunes.tone(987, 50);
      }
      cY--;
    }
    for (int i=0; i<(3+checkMenu); i++)
    {
      if (i==cY)
      {
        a.drawCircle(14,26+i*10,2,1);
      }
      else
      {
        a.drawCircle(14,26+i*10,2,0);
      }
    }
    a.display();
    buttonBuffer = buttonCurr;
  }
  //once the user has made a selection
  if (!mute)
  {
    a.tunes.tone(1318, 100);
  }
  if (cY == 0)
  {
    //play game
    setupGame();
    loop();
  }
  if (cY == 1)
  {
    //credits
    credits();
  }
  if (cY == 2)
  {
    //mute
    toggleMute();
  }
  if (cY == 3)
  {
    //clear high score
    clearData();
  }
}

void setupGame()
{
  score = 0;
  shield = 0;
  lives = 2;
  resumeSetupGame();
  sX = -20;
  sY = random(58);
}

void resumeSetupGame()
{
  a.clear();
  a.setTextSize(1);
  boatX = 6;
  boatY = 29;
  drawGameBoat(boatX,boatY);
  a.display();
  shieldOn = false;
  for (int i=0;i<nGators;i++)
  {
    gX[i] = 135+random(150);
    gY[i] = random(57);
  }
}

void credits()
{
  a.clear();
  a.setTextSize(1);
  a.setCursor(0,0);
  a.print("All of this was done");
  a.setCursor(0,8);
  a.print("by FANBOAT, aka");
  a.setCursor(0,16);
  a.print("Richie Davidson.");
  a.setCursor(0,24);
  a.print("Learn more at my site:");
  a.setCursor(0,32);
  a.print("  fanboat.co");
  a.setCursor(0,48);
  a.print("Thanks!");
  a.display();
  delay(2000);
  while (!a.pressed(A_BUTTON) && !a.pressed(B_BUTTON))
  {
    //wait it out, yo
  }
  loadMenu();
  mainMenu();
}

void toggleMute()
{
  if (mute)
  {
    check = true;
    mute = false;
    EEPROM.put(EEPROM_STORAGE_SPACE_START + 0, check);
    EEPROM.put(EEPROM_STORAGE_SPACE_START + 20, mute);
  }
  else
  {
    check = true;
    mute = true;
    EEPROM.put(EEPROM_STORAGE_SPACE_START + 0, check);
    EEPROM.put(EEPROM_STORAGE_SPACE_START + 20, mute);
  }
  loadMenu();
  mainMenu();
}

void drawGameBoat(int x, int y)
{
  a.fillRect(x,y,2,5,1);//fan
  a.fillRect(x+1,y,1,1,0);
  a.fillRect(x+3,y+4,2,1,1);//engine
  a.fillRect(x,y+6,11,1,1);//hull
  a.fillRect(x+11,y+5,1,1,1);//bow
  a.fillRect(x+6,y+3,1,2,1);//body
  a.fillRect(x+6,y+1,1,1,1);//head
}

void drawGator(int x,int y)
{
  a.fillRect(x,6+y,15,1,1);//lower line
  a.fillRect(x,5+y,1,1,1);//lower teeth
  a.fillRect(2+x,5+y,1,1,1);
  a.fillRect(4+x,5+y,1,1,1);
  a.fillRect(5+x,4+y,2,1,1);//upper body
  a.fillRect(7+x,3+y,1,1,1);//eye
  a.fillRect(8+x,4+y,6,1,1);//upper body
  a.fillRect(14+x,2+y,1,2,1);//tail
  a.fillRect(15+x,3+y,1,3,1);
  if (((x+y)/32)%2 == 0)
  {//open mouth
    a.fillRect(3+x,y,1,1,1);
    a.fillRect(2+x,1+y,1,1,1);
    a.fillRect(3+x,2+y,1,1,1);
    a.fillRect(4+x,3+y,1,1,1);
  }
  else
  {//closed mouth
    a.fillRect(1+x,4+y,1,1,1);
    a.fillRect(3+x,4+y,1,1,1);
  }
}

void drawPickUp(int x, int y)
{
  a.fillRect(x,1+y,1,3,x%2);
  a.fillRect(1+x,1+y,1,1,x%2);
  a.fillRect(2+x,y,1,1,x%2);
  a.fillRect(3+x,1+y,1,1,x%2);
  a.fillRect(4+x,1+y,1,3,x%2);
  a.fillRect(1+x,4+y,1,1,x%2);
  a.fillRect(2+x,5+y,1,1,x%2);
  a.fillRect(3+x,4+y,1,1,x%2);
}

void loadMenu()
{
  for (int i=22;i>1;i=i-1)
  {
    a.clear();
    drawSmallBoatLogo(4,i);
    a.setTextSize(2);
    a.setCursor(46,4+i);
    a.print("ANBOAT");
    a.display();
  }
  a.setTextSize(1);
  a.setCursor(20,23);
  a.print("Start!");
  a.setCursor(20,33);
  a.print("Credits");
  a.setCursor(20,43);
  if (mute)
  {
    a.print("Mute: ON");
  }
  else
  {
    a.print("Mute: OFF");
  }
  if (check)
  {
    hiScore = getHiScore();
    if (hiScore > 0)
    {
      a.setCursor(20,53);
      a.print("Clear Hi Score");
      checkMenu = 1;
      a.setCursor (68,28);
      a.print("HI SCORE:");
      a.setCursor (90,38);
      a.print(hiScore);
    }
  }
  else
  {
    hiScore = 0;
    checkMenu = 0;
  }
  a.display();
}

bool checkData()
{
  bool myCheck;
  EEPROM.get(EEPROM_STORAGE_SPACE_START + 0, myCheck);
  return myCheck;
}

bool getMute()
{
  bool myMute;
  EEPROM.get(EEPROM_STORAGE_SPACE_START + 20, myMute);
  return myMute;
}

int getHiScore()
{
  int myHiScore;
  EEPROM.get(EEPROM_STORAGE_SPACE_START + 1, myHiScore);
  return myHiScore;
}

void newHiScore()
{
  check = true;
  hiScore = score;
  EEPROM.put(EEPROM_STORAGE_SPACE_START + 0, check);
  EEPROM.put(EEPROM_STORAGE_SPACE_START + 1, hiScore);
  a.setCursor(2,38);
  a.print("New High Score!");
}

void clearData()
{
  check = true;
  hiScore = 0;
  cY = 0;
  EEPROM.put(EEPROM_STORAGE_SPACE_START + 0, check);
  EEPROM.put(EEPROM_STORAGE_SPACE_START + 1, hiScore);
  a.clear();
  a.setTextSize(3);
  a.setCursor(2,5);
  a.print("DELETED");
  a.display();
  if (!mute)
  {
    a.tunes.tone(275, 500);
    delay(500);
    a.tunes.tone(250, 500);
    delay(500);
    a.tunes.tone(200, 1000);
  }
  delay(1000);
  loadMenu();
  mainMenu();
}

void displayLogoSmall()
{
  a.setTextSize(2);
  for (int i = 128; i > 1; i = i - 1)
  {
    if (!mute)
    {
      a.tunes.tone(900+5*i, 10);
    }
    a.clear();
    drawSmallBoatLogo(i+2,22);
    if (i < 70)
    {
      a.setCursor(106,26);
      a.print("T");
      if (i<58)
      {
        a.setCursor(94,26);
        a.print("A");
        if (i<46)
        {
          a.setCursor(82,26);
          a.print("O");
          if (i<34)
          {
            a.setCursor(70,26);
            a.print("B");
            if (i<22)
            {
              a.setCursor(58,26);
              a.print("N");
              if (i<10)
              {
                a.setCursor(46,26);
                a.print("A");
              }
            }
          }
        }
      }
    }
    a.display();
  }
}

void drawSmallBoatLogo(int x,int y)
{
  //26-1-4 wide
  //13-1-5 tall
  //hull
  a.fillRect(x,14+y,26,5,1);//hull
  a.fillTriangle(x,17+y,x,18+y,x+1,18+y,0);//bow
  //lower fan/hull
  a.fillRect(27+x,14+y,4,5,1);
  //fan
  a.fillRect(27+x,y,4,13,1);
  a.fillRect(27+x,y,1,1,0);
  //stick
  a.fillTriangle(6+x,13+y,7+x,13+y,7+x,10+y,1);//lower
  a.fillRect(8+x,8+y,1,2,1);//upper
  //pilot
  a.fillRect(9+x,12+y,3,2,1);//bottom
  a.fillRect(10+x,9+y,3,3,1);//middle
  a.fillRect(11+x,8+y,3,1,1);//top
  a.fillRect(12+x,4+y,3,3,1);//head
  //chair
  //a.fillRect(13+x,13+y,1,1,1);
  a.fillRect(14+x,10+y,1,3,1);
  a.fillRect(15+x,8+y,1,2,1);
  //engine
  a.fillRect(17+x/*+x%2*/,11+y,7,3,1);
  for(int i = 0; i < 3; i = i + 1)
  {
    a.fillRect(18+x+i*2/*+x%2*/,10+y,1,1,1);//ridges
  }
  a.fillRect(x,13+y,31,1,0);//low black line
  //upper wind
  a.fillRect(32+x,y,11,3,1);
  a.fillTriangle(43+x,y,43+x,1+y,44+x,y,1);
  //lower wind
  a.fillRect(32+x,7+y,4,3,1);
  a.fillTriangle(36+x,7+y,36+x,8+y,37+x,7+y,1);
}

void displayLogoBig()
{
  drawBigBoatLogo(15,0);//draw main logo
  a.display();
  delay(1000);
  for(int i = 0; i < 20; i = i + 1)//start up engine
  {
    a.clear();
    drawBigBoatLogo(15,i%2);
    if (!mute)
    {
      a.tunes.tone(700+100*(i%2), 10);
    }
    a.display();
    delay(20);
  }
  for(int i = 0; i < 45; i = i + 1)//exit screen left
  {
    a.clear();
    drawBigBoatLogo(15-i*3,(i/2)%2);
    drawBigFWind(i*3);
    if (!mute)
    {
      a.tunes.tone(1200+20*i, 10);
    }
    a.display();
  }
}

void drawBigFWind (int x)
{
  if(x < 6)
  {
    a.fillTriangle(85,12,85+x,12,85,12+x,1);//top triangle
  }
  if(x >= 12 && x < 27)
  {
    a.fillTriangle(85,12,90,12,85,17,1);//top triangle
    a.fillRect(98-x,12,x-12,6,1);//top rectangle
  }
  if(x >= 27 && x < 36)
  {
    a.fillTriangle(85,12,90,12,85,17,1);//top triangle
    a.fillRect(98-x,12,x-12,6,1);//top rectangle
    a.fillTriangle(70,24,75,24,70,29,1);//bottom triangle
    a.fillRect(98-x,24,x-27,6,1);//bottom rectangle
  }
  if(x >= 36)
  {
    a.fillTriangle(121-x,12,126-x,12,121-x,17,1);//top triangle
    a.fillRect(98-x,12,24,6,1);//top rectangle
    a.fillTriangle(106-x,24,111-x,24,106-x,29,1);//bottom triangle
    a.fillRect(98-x,24,9,6,1);//bottom rectangle
  }
}

void drawBigBoatLogo(int x,int s)
{
  //x value offsets image horizontally
  //s value moves just the engine
  //hull
  a.fillRect(18+x,40,64,8,1);//upper
  a.fillCircleHelper(24+x,44,6,2,1,1);//bow
  a.fillRect(24+x,48,58,4,1);//lower
  a.fillRect(18+x,37,64,6,0);//smooth upper
  //stick
  a.fillRect(34+x,35,1,8,1);//stick
  a.fillRect(33+x,31,2,3,1);//handle
  //pilot
  a.fillRoundRect(38+x,27,5,20,2,1);//body
  a.fillCircle(40+x,22,2,1);//head
  //chair
  a.fillRoundRect(45+x,30,3,20,1,1);//chairback
  //engine
  a.fillRoundRect(52+x+s,37,14,10,3,1);//block
  for(int i = 0; i < 3; i = i + 1)//engine ridges
  {
    a.fillRoundRect(55+x+s+i*3,35,2,4,1,1);
  }
  //fan
  a.fillRoundRect(74+x,12,8,35,4,1);//main fan
  a.fillRect(78+x,12,4,4,1);//top right corner
  //bottom line
  a.fillRect(18+x,42,64,1,0);
  //right line
  a.fillRect(73+x,42,1,12,0);
}

void pause()
{
  a.clear();
  a.setTextSize(3);
  a.setCursor(5,12);
  a.print("PAUSE");
  a.setTextSize(1);
  a.setCursor(5,35);
  a.print("Up or Down to resume");
  a.setCursor(5,44);
  if (lives == 2)
  {
    a.print("You have 2 boats");
  }
  if (lives == 1)
  {
    a.print("You have 1 boat");
  }
  if (lives == 0)
  {
    a.print("On your last boat!");
  }
  a.setCursor(68,0);
  a.print("Score:");
  a.setCursor(103,0);
  a.print(score);
  if (!mute)
  {
    a.tunes.tone(900, 50);
    delay(100);
    a.tunes.tone(900, 200);
  }
  a.display();
  delay(500);
  while (!a.pressed(UP_BUTTON) && !a.pressed(DOWN_BUTTON))
  {
    //add a quit menu here?
  }
}

void drawShield(int x, int y)
{
  a.drawCircle(4+x,3+y,random(5)+8,1);
  a.drawCircle(4+x,3+y,random(5)+8,1);
}

void loseLife()
{
  if (lives == 0)
  {
    gameOver();
  }
  else
  {
    lives--;
    resumeSetupGame();
    a.clear();
    a.setTextSize(3);
    a.setCursor(5,12);
    a.print("-1 BOAT!");
    a.setTextSize(1);
    a.setCursor(5,35);
    a.print("Gator done et ya!");
    a.setCursor(5,44);
    a.print("Up or Down to resume");
    a.display();
    if (!mute)
    {
      for (int i=0;i<5;i++)
      {
        a.tunes.tone(800-i*75, 30);
        delay(30);
      }
      a.tunes.tone(350, 500);
    }
    delay(500);
    while (!a.pressed(UP_BUTTON) && !a.pressed(DOWN_BUTTON))
    {
      //add a quit menu here?
    }
  }
}

void gameOver()
{
  a.clear();
  a.setTextSize(3);
  a.setCursor(2,5);
  a.print("U R DED");
  a.setTextSize(1);
  a.setCursor(2,28);
  a.print("Score:");
  a.setCursor(37,28);
  a.print(score);
  a.setCursor(2,48);
  a.print("A or B to restart!");
  if (check)
  {
    if (score > hiScore)
    {//new high score!
      newHiScore();
    }
  }
  else
  {//high score!
    newHiScore();
  }
  a.display();
  if (!mute)
  {
    a.tunes.tone(450, 500);
    delay(500);
    a.tunes.tone(350, 1500);
  }
  delay(500);
  while (!a.pressed(A_BUTTON) && !a.pressed(B_BUTTON))
  {
    //nuffin
  }
  setupGame();
  intro();
}

void loop()
{
  a.clear();
  if (a.pressed(DOWN_BUTTON) && boatY < boatMax)
  {
    boatY++;
  }
  if (a.pressed(UP_BUTTON) && boatY > boatMin)
  {
    boatY--;
  }
  buttonCurr = a.pressed(A_BUTTON) || a.pressed(B_BUTTON);
  if (a.pressed(A_BUTTON))
  {
    pause();
  }
  if (a.pressed(B_BUTTON))
  {
    if (shield > 0)
    {
      shieldOn = true;
      shield--;
      drawShield(boatX,boatY);
      if (!mute)
      {
        a.tunes.tone(random(1000), 50);
      }
    }
    else
    {
      shieldOn = false;
    }
  }
  else
  {
    shieldOn = false;
  }

  for (int i=0;i<nGators;i++)
  {//check each gator
    if (gX[i]<-20)
    {//if the gator has been passed
      score++;
      gX[i] = 135+random(120);
      gY[i] = random(57);
    }
    else
    {
      gX[i] = gX[i] - float(score)/100 - 1;
    }
    if (gX[i]<boatX+14 && gX[i]>boatX-15)
    {//if gator is within impact on X axis
      if ((gY[i]-boatY)<3 && (gY[i]-boatY)>-8)
      {//if gator is within impact on Y axis
        //impact!
        if (!shieldOn)
        {
          loseLife();
        }
      }
    }
    drawGator(int(gX[i]),gY[i]);
  }
  
  //shield drop
  if ((score%100) == 50)
  {//drop shield pickup
    sX = 135+random(150);
    sY = random(58);
    if (!mute)
    {
      //not really working as intended. Not sure how to make series of tones without halting the game.
      a.tunes.tone(500, 20);
      a.tunes.tone(900, 100);
    }
  }

  //shield move
  if (sX>-18)
  {
    sX--;
    drawPickUp(sX,sY);
  }

  //shield collect
  if (sX<boatX+14 && sX>boatX-8)
  {//if pickup is within impact on X axis
    if ((sY-boatY)<6 && (sY-boatY)>-10)
    {//if pickup is within impact on Y axis
      //impact!
      sX = -20;
      shield += 100;
      if (!mute)
      {
        a.tunes.tone(800, 40);
      }
    }
  }
  
  a.setCursor(68,0);
  a.print("Score:");
  a.setCursor(103,0);
  a.print(score);
  a.setCursor(60,56);
  a.print("Shield:");
  a.setCursor(103,56);
  a.print(shield);
  
  
  drawGameBoat(boatX,boatY);
  //delay(100);
  a.display();
  buttonBuffer = buttonCurr;
}