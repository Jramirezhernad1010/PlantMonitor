


 
/*void loop()
{
  inputValue = analogRead(analogPin);
  delay(50);
  if (inputValue<700){
  i=i+1;
  inches=i*0.01;
  Serial.print("Tips: ");
  Serial.println(inoutValue);
  Serial.print("Total rainfall: ");
  Serial.println(inches);
 
 delay(500);
}*/

float checkRainBucket(){//Checks how many times the seesaw has tipped and multiples i by 0.01 to get the rain in inches
  inputValue  = analogRead(analogPin);
  delay(50);
  if(inputValue>900){
     i=i+1;
  }
  float inches = i*0.01;
  return inches;
}
