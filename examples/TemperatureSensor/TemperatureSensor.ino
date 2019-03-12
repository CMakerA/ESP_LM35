/*
  TemperatureSensor

  Read the LM35 connected to an ESP with the ESP_LM35 library.

  The circuit:
  * LM35 signal pin to GPIO36
  * LM35 +5V pin to 3.3V
  * LM35 GND pin to GND

  Created 12 march 2019
  By ArnyminerZ

  https://github.com/CMakerA/ESP_LM35

*/

#include <ESP_LM35.h>

ESP_LM35 temp(36);

void setup() {
}

void loop() {
  Serial.print("Temperature: ");
  Serial.print(temp.tempC());
  Serial.print("ºC ");
  Serial.print(temp.tempF());
  Serial.print("ºF ");
  Serial.print(temp.tempK());
  Serial.println("K ");

  delay(1000);
}
