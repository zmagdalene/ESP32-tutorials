#include <Arduino.h>

/**********************************************************************
  Filename    : BreathingLight
  Description : Make led light fade in and out, just like breathing.
  Auther      : www.freenove.com
  Modification: 2024/06/18
**********************************************************************/
#define PIN_LED 2 // define the led pin
#define FRQ 1000  // define the pwm frequency
#define PWM_BIT 8 // define the pwm precisions
#define CHN 0     // define the pwn channel

void setup()
{
  ledcSetup(CHN, FRQ, PWM_BIT); // setup the ledc
  ledcAttachPin(PIN_LED, CHN);  // attach the led pin to pwm channel
}

void loop()
{
  for (int i = 0; i < 255; i++)
  {
    ledcWrite(CHN, i);
    delay(10);
  }

  for (int i = 255; i > -1; i--)
  {
    ledcWrite(CHN, i);
    delay(10);
  }
}