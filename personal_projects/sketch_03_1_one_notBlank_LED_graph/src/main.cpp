#include <Arduino.h>

#define BUTTON_1 14
#define BUTTON_2 12
byte ledPins[] = {15, 2, 0, 4, 5, 18, 19, 21, 22, 23};
int ledCount;

void setup()
{
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);

  ledCount = sizeof(ledPins);
  for (int i = 0; i < ledCount; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  if (digitalRead(BUTTON_1) == LOW)
  {
    delay(20);
    for (int i = 0; i < ledCount; i++)
    {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
    }
    while (digitalRead(BUTTON_1) == LOW)
      ;
    delay(20);
  }
  if (digitalRead(BUTTON_2) == LOW)
  {
    delay(20);
    for (int i = ledCount - 1; i > -1; i--)
    {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
    }
    while (digitalRead(BUTTON_2) == LOW)
      ;
    delay(20);
  }
}