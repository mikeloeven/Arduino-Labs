/*
W1_2
Mike Loeven
*/

byte incr = 0x01;

void setup()
{
DDRL = 0xFF;
PORTL = 0x00;

  
}
void loop()
{

   incr = 0x01;
   PORTL = incr;
   delay (750);
 
  while (incr < 128 )
  {  
  incr += incr;
  PORTL = incr;
  delay (750);
  }
  
  
  
}
