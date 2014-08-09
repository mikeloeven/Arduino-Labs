/*
W2_4
Mike Loeven
*/

byte incr = 0x33;

void setup()
{
  DDRL = 0xff;
  PORTL = incr;
  Serial.begin(9600);
}
void loop()
{
  while (incr < 0x77)
  {
    incr ++;
    PORTL = incr;
    Serial.println(incr,HEX);
    delay(500);
  }
}

