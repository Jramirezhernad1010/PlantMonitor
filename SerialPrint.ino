

void serialPrint(){
  Serial.println("AirTemp:");
  Serial.print("Temp- "); Serial.println(getAirTempC());
  Serial.println("SoilSensor: ");
  Serial.print("SoilTemp: "); Serial.println(getSoilTempC());
  Serial.print("Capacitance: "); Serial.println(getCapRead());
  Serial.println("RainBucket");
  Serial.print("Rainfall: "); Serial.println(checkRainBucket());
  Serial.println(" ");
  delay(500);
}
