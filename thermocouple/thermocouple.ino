/*
Arduino-KTypeReader with MAX6675

Rev 1.2

Written by Chong Jin Xiang of 3E4 2018
*/

#include <max6675.h>

int MISO_PIN = 8;
int CS_PIN = 9;
int SCLK_PIN = 10;
double kelvintemp;

MAX6675 tc(SCLK_PIN,CS_PIN,MISO_PIN);

void setup() {
  Serial.begin(19200);
  Serial.println("Connected!");
  delay(1000);
}

void loop() {
  Serial.println("----------");
  Serial.print(tc.readCelsius());
  Serial.println(" C");
  Serial.print(tc.readCelsius() + 273.15);
  Serial.println(" K");
  delay(500);
}
