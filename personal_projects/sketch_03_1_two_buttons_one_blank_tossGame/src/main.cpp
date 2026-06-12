#include <Arduino.h>

#define BUTTON_1 14
#define BUTTON_2 12

#define LED_1 33
#define LED_2 13

byte ledPins[] = {15, 2, 0, 4, 5, 18, 19, 21, 22, 23};
int ledCount;
int currentLED = 4;

void setup()
{
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);

  ledCount = sizeof(ledPins);
  for (int i = 0; i < ledCount; i++)
  {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  digitalWrite(ledPins[currentLED], HIGH);
}

void loop()
{
  if (digitalRead(BUTTON_1) == LOW)
  {
    delay(20);

    digitalWrite(ledPins[currentLED], LOW);

    currentLED++;
    if (currentLED >= ledCount)
    {
      currentLED = 4;
      digitalWrite(LED_1, HIGH);
      digitalWrite(LED_2, LOW);
    }

    digitalWrite(ledPins[currentLED], HIGH);

    while (digitalRead(BUTTON_1) == LOW)
      ;
    delay(20);
  }

  if (digitalRead(BUTTON_2) == LOW)
  {
    delay(20);

    digitalWrite(ledPins[currentLED], LOW);

    currentLED--;
    if (currentLED < 0)
    {
      currentLED = 4;
      digitalWrite(LED_2, HIGH);
      digitalWrite(LED_1, LOW);
    }

    digitalWrite(ledPins[currentLED], HIGH);

    while (digitalRead(BUTTON_2) == LOW)
      ;
    delay(20);
  }
}