/*
  ESP_LM35.h - Library for using LM35 sensors with the ESP boards.
  Created by ArnyminerZ (Community Maker Alcoi), March 12, 2019.
  Released into the public domain.
*/
#ifndef ESP_LM35_h
#define ESP_LM35_h

#include "Arduino.h"

class ESP_LM35
{
  public:
    ESP_LM35(int pin);
    ESP_LM35(int pin, int resolutionBits);

    float tempC();
    float tempF();
    float tempK();

    double doubleTempC();
    double doubleTempF();
    double doubleTempK();
  private:
    int _pin;
    int _analogReadMax;
};

#endif