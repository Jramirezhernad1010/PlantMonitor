

 
void setupAirTemp(void)
{
  sensors.begin();
  Serial.println("Airtemp Thermometer Active");
  Serial.println(" ");
}

float getAirTempC(){
   sensors.requestTemperatures();
   float celsius = sensors.getTempCByIndex(0);
   return celsius;
}

float getAirTempF(){
  float Fahrenheit = sensors.toFahrenheit(getAirTempC());
  return Fahrenheit;
}
