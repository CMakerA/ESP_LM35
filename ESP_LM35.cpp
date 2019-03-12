/*
  ESP_LM35.cpp - Library for using LM35 sensors with the ESP boards.
  Created by ArnyminerZ (Community Maker Alcoi), March 12, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "ESP_LM35.h"

ESP_LM35::ESP_LM35(int pin)
{
    _pin = pin;
    analogReadResolution(12);
    _analogReadMax = 4096;
}
ESP_LM35::ESP_LM35(int pin, int resolutionBits)
{
    _pin = pin;
    analogReadResolution(resolutionBits);
    _analogReadMax = 2^resolutionBits;
}

float ESP_LM35::tempC()
{
    int val = analogRead(_pin);
    float mv = (val/(float)_analogReadMax)*5000;
    float cel = mv/10;
    return cel;
}
float ESP_LM35::tempF()
{
    int val = analogRead(_pin);
    float mv = (val/(float)_analogReadMax)*5000;
    float cel = mv/10;
    float farh = (cel*9)/5 + 32;
  return farh;
}
float ESP_LM35::tempK()
{
    int val = analogRead(_pin);
    float mv = (val/(float)_analogReadMax)*5000;
    float cel = mv/10;
    float kel = cel-273.15;
    return kel;
}

double ESP_LM35::doubleTempC()
{
    int val = analogRead(_pin);
    double mv = (val/(double)_analogReadMax)*5000;
    double cel = mv/10;
    return cel;
}
double ESP_LM35::doubleTempF()
{
    int val = analogRead(_pin);
    double mv = (val/(double)_analogReadMax)*5000;
    double cel = mv/10;
    double farh = (cel*9)/5 + 32;
  return farh;
}
double ESP_LM35::doubleTempK()
{
    int val = analogRead(_pin);
    double mv = (val/(double)_analogReadMax)*5000;
    double cel = mv/10;
    double kel = cel-273.15;
    return kel;
}