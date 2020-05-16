#include "letters.h"

#define LEDNUM 6
#define LET_LENGTH 5
#define LET_WIDTH  5

                  //BOT(0)    TOP(4)
int leds[LEDNUM] = {3, 4, 5, 6, 8};
int period = 200;

void setup() {
  for(int i = 0; i < LEDNUM; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void displayLetter(int letter[LET_LENGTH][LET_WIDTH], int period)
{
    for (int i = 0; i < LET_LENGTH; i++) 
    { 
        for (int j = 0; j < LET_WIDTH; j++) 
        { 
            digitalWrite(leds[j],letter[j][i]); 
        } 
        delay(period);
    } 
}


void loop() 
{
  period = 1;
  //displayLetter(letter_test, period);
  displayLetter(letter_H, period);
  displayLetter(letter_I, period);
  displayLetter(letter_blank, period);
}
