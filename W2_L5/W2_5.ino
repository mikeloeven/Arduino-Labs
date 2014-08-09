/*
W2_5
Mike Loeven
*/
const int SW0 = 10;
byte incr = 0x33;

void setup()
{
  pinMode(SW0,INPUT);
  DDRL = 0xff;
  PORTL = incr;
  Serial.begin(9600);
}
void loop()
{
  if (incr < 0x77)
  {
    if (digitalRead(SW0)==0)
    {
    incr ++;
    PORTL = incr;
    Serial.println(incr,HEX);
    delay(500);
    }
  }
}
