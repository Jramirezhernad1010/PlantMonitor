

void setupSoilSensor() {
  Serial.println("Starting Soil Sensor");
  Serial.println("");
  
  if (!ss.begin(0x36)) {
    Serial.println("ERROR! seesaw not found");
    while(1);
  } else {
    Serial.print("seesaw started! version: ");
    Serial.println(ss.getVersion(), HEX);
  }
}

void readSoilSensor() {
  float tempC = ss.getTemp();
  uint16_t capread = ss.touchRead(0);

  Serial.print("Temperature: "); Serial.print(tempC); Serial.println("*C");
  Serial.print("Capacitive: "); Serial.println(capread);
  delay(100);
}
float getSoilTempC(){ //Returs the soil temperature in celsius
  float Celsius = ss.getTemp();
  return Celsius;
}

float getSoilTempF(){
  float Fahrenheit = getSoilTempC() * (9/5)+32;
  return Fahrenheit;
}

uint16_t getCapRead(){
  uint16_t capread = ss.touchRead(0);
  return capread;
}
