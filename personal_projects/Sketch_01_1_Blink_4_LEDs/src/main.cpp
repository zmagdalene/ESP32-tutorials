#include <Arduino.h>

#define BUILTIN_LED 2
#define SECOND_LED 12
#define THIRD_LED 13
#define FOURTH_LED 14

void setup()
{

  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(SECOND_LED, OUTPUT);
  pinMode(THIRD_LED, OUTPUT);
  pinMode(FOURTH_LED, OUTPUT);
}

void loop()
{

  digitalWrite(FOURTH_LED, LOW);
  digitalWrite(BUILTIN_LED, LOW);
  delay(250);
  digitalWrite(BUILTIN_LED, HIGH);
  digitalWrite(SECOND_LED, HIGH);
  delay(250);
  digitalWrite(SECOND_LED, LOW);
  digitalWrite(THIRD_LED, HIGH);
  delay(250);
  digitalWrite(THIRD_LED, LOW);
  digitalWrite(FOURTH_LED, HIGH);
  delay(250);
}
