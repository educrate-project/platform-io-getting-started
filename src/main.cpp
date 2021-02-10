// src/main.cpp

#include <Arduino.h>

const int chosenLEDPin = LED_BUILTIN;
const int delayBetweenBlinksMs = 1000;

void turnLEDOn(bool turnOn)
{
  if (turnOn)
  {
    digitalWrite(chosenLEDPin, HIGH);
  }
  else
  {
    digitalWrite(chosenLEDPin, LOW);
  }
}

void sleepOneSecond()
{
  delay(delayBetweenBlinksMs);
}

void setup()
{
  pinMode(chosenLEDPin, OUTPUT);
}

void loop()
{
  turnLEDOn(true);
  sleepOneSecond();
  turnLEDOn(false);
  sleepOneSecond();
}
