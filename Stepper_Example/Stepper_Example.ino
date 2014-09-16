//stepper sample 
int stepper = 0x90;
void CW()
{
  switch(stepper)
  {
    case 0b11000000:
    stepper = 0b01100000;
    PORTK = stepper;
    break;
    case 0b01100000:
    stepper = 0b00110000;
    PORTK = stepper;
    break;
    case 0b00110000:
    stepper = 0b10010000;
    PORTK = stepper;
    break;
    case 0b10010000:
    stepper = 0b11000000;
    PORTK = stepper;
    break;
  }
}
void CCW()
{
  switch(stepper)
  {
    case 0b11000000:
    stepper = 0b10010000;
    PORTK = stepper;
    break;
    case 0b10010000:
    stepper = 0b00110000;
    PORTK = stepper;
    break;
    case 0b00110000:
    stepper = 0b01100000;
    PORTK = stepper;
    break;
    case 0b01100000:
    stepper = 0b11000000;
    PORTK = stepper;
    break;
  }
  
}
void setup()
{
DDRK = 0xFF;
}
void loop()
{
  CCW();
  delay(100);
}
