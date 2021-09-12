#include <OneWire.h>
#include <DallasTemperature.h>
#include "Adafruit_seesaw.h"
Adafruit_seesaw ss;
#define ONE_WIRE_BUS 7 //Airtemp Sensor connects to pin 7
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
//#include "Adafruit_seesaw.h";
//Adafruit_seesaw ss;
const int analogPin=0; //Pin that the bucket connects to
int inputValue=0; //Count the number of times the bucket tims
int outputValue=0; //The amount of rain in inches. Output = inputValue * 1
int i = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setupSoilSensor();
  setupAirTemp();
  
}

void loop() {
  serialPrint();
  // put your main code here, to run repeatedly:

}
