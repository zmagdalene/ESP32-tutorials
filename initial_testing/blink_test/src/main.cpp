#include <Arduino.h>

#define LED 33
#define LED_2 13

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  digitalWrite(LED_2, LOW);
  delay(500);
  digitalWrite(LED, LOW);
  digitalWrite(LED_2, HIGH);
  delay(500);
}