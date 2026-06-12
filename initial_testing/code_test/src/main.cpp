#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  int sensor = analogRead(34);
}

void loop()
{
  Serial.println("Program Running...");
  Serial.println("No New Line");

  int result = myFunction(2, 3);
  Serial.println(result);
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}