#define LEDNUM 6
                  //BOT(0)    TOP(4)
int leds[LEDNUM] = {3, 4, 5, 6, 8};

void setup() {
  for(int i = 0; i < LEDNUM; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < LEDNUM; i++)
  {
    digitalWrite(leds[i], HIGH);
    delay(50);
  }
  for(int i = LEDNUM-1; i >= 0; i--)
  {
    digitalWrite(leds[i], LOW);
    delay(50);
  }
}
