/*
W1_3
Mike Loeven
*/
byte incr = 0x01;
const int S00= 12;
const int S02= 10;


void setup()
{
  Serial.begin(9600);
  pinMode(S00,INPUT);
  pinMode(S02,INPUT);
  DDRL = 0xff;
  PORTL = incr;
}

void loop()
{
  if (digitalRead(S02)==0)
  {
    
    incr += incr;
    if (incr == 0) incr = 1;
    PORTL = incr;
    if (incr == 1) PORTL =1;
    Serial.println(incr);
    delay (750);
  }
  if (digitalRead(S00)==0)
  {
    incr/=2;
    if (incr <= 0) incr = 128;
    PORTL = incr;
    Serial.println(incr);
    delay (750);
  }
  
  
}
