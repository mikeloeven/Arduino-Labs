void setup ()
{
  Serial.begin(9600);
  DDRL = 0xff;
  PORTL = 0x22;
}
void loop ()
{
  
    
    
    do 
    {
      Serial.println(PORTL,HEX);
      PORTL++;
      delay(250);
      if (PORTL==0x44)Serial.println(PORTL,HEX);
    }while(PORTL < 0x44);
    do
    {
      Serial.println(PORTL,HEX);
      PORTL--;
      delay(250);
      if (PORTL==0x11)Serial.println(PORTL,HEX);
    } while(PORTL > 0x11);
    
    while(1)
    {
      delay (5000);
    }
    
    
    
  }


