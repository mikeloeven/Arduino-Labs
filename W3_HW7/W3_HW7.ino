char fName[] = {'M','i','k','e'};
void setup ()
{
  
  Serial.begin(9600);
  
}

void loop()
{
  
 for(int i = 0; i<4; i++)
 {
     Serial.write(fName[i]);
     delay(500);
 }
 Serial.println();
  
}
