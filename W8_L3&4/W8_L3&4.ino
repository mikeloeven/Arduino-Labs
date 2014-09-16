int stepper = 0x90;
int Count = 0;
int Angle = 0;
int SW0 = 10;
int SW1 = 11;
int SW2 = 12;

//clears LCD
void clrAll()
{
uint8_t clrArr[] = {0xFE,0x58};
Serial3.write(clrArr,2);
}

//clears a single line
void clrLn(uint8_t row)
{  
  uint8_t clrOpp[] = {254,71,1,row};
  Serial3.write(clrOpp,4);
  Serial3.write("                    ");
  Serial3.write(clrOpp,4);  
}
//sets cursor position
void setCursor(uint8_t col, uint8_t row)
{
  uint8_t oppArr[] = {254,71,col,row};
  Serial3.write(oppArr,4);
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
  clrAll();
  Count=0;
  Angle=0;
  Serial3.print("Stepper Motor");
  clrLn(3);
  Serial3.print("Count: 0");
  clrLn(4);
  Serial3.print("Angle: 0");
  
}

void loop()
{
  if (digitalRead(SW0)==0)
  {
    CW();
    clrLn(2);
    Serial3.print("Clockwise");
    Count++;
    Angle+=18;
    if (Count==20)
    {
     Count=0;
     Angle=0;
    }
    
    clrLn(3);
    Serial3.print("Count: ");
    Serial3.print(Count);
    clrLn(4);
    Serial3.print("Angle: ");
    Serial3.print(Angle);
    
  }
  if (digitalRead(SW1)==0)
  {
    CCW();
    clrLn(2);
    Serial3.print("Counter Clockwise");
    Count--;
    Angle-=18;
    if (Count<0)
    {
      Count = 19;
      Angle = 342;
    }
    clrLn(3);
    Serial3.print("Count: ");
    Serial3.print(Count);
    clrLn(4);
    Serial3.print("Angle: ");
    Serial3.print(Angle);
    
  }
  
  
  if (digitalRead(SW2)==0)
  {
    setup();
  }
  
  
  delay(200);
}


//20 steps for one Revolution
//18 degrees per step aprox



