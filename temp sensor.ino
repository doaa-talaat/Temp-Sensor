int nPin =A0;

int TempValue;

void setup()
{
  Serial.begin(9600); 
}
void loop()
{
  TempValue = analogRead(nPin); 
  float TempCel = ( TempValue/1024.0)*500; 
  float TempFarh = (TempCel*9)/5 + 32;

  Serial.print("TEMPRATURE in Celsius = "); 
  Serial.print(TempCel);
  Serial.print("*C");
  Serial.print("    ,,   ");

  Serial.print("TEMPRATURE = "); 
  Serial.print(TempFarh);
  Serial.print("*F");
  Serial.println();
  
  delay(1000);

}