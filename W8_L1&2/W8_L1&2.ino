int stepper = 0x90;
int SW0 = 10;
int SW1 = 11;
int SW2 = 12;
void clr()
{
uint8_t clrlcd[] = {0xFE,0x58};
Serial3.write(clrlcd,2);
}

void CW()
{
  switch(stepper)
  {
    case 0x90:
    stepper = 0xC0;
    PORTK = stepper;
    break;
    case 0xc0:
    stepper = 0x60;
    PORTK = stepper;
    break;
    case 0x60:
    stepper = 0x30;
    PORTK = stepper;
    break;
    case 0x30:
    stepper = 0x90;
    PORTK = stepper;
    break;
  }
}
void CCW()
{
  switch(stepper)
  {
    case 0x90:
    stepper = 0x30;
    PORTK = stepper;
    break;
    case 0x30:
    stepper = 0x60;
    PORTK = stepper;
    break;
    case 0x60:
    stepper = 0xC0;
    PORTK = stepper;
    break;
    case 0xC0:
    stepper = 0x90;
    PORTK = stepper;
    break;
  }
  
}


void setup()
{
  DDRK=0xFF;
  pinMode(SW0, INPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  Serial3.begin(9600);
  
}

void loop()
{
  if (digitalRead(SW0)==0)
  {
    CW();
    clr();
    Serial3.print("Clockwise");
  }
  if (digitalRead(SW1)==0)
  {
    CCW();
    clr();
    Serial3.print("Counter Clockwise");
  }
  delay(200);
}


//20 steps for one Revolution
//18 degrees per step aprox



