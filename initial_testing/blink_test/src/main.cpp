#include <Arduino.h>

#define LED 33

void setup()
{
  // put your setup code here, to run once:
  digitalRead(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}