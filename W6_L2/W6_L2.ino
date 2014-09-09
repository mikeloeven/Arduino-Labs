int SW0 = 10;
int SW1 = 11;
int SW2 = 12;
int IN1 = 9;
int IN2 = 7;
int EN = 8;
int OPA = 6;
int OPB = 5;

//Write Out Title
void title ()
{
   locate(1,1);
   Serial3.write("DC Motor Speed ");
}

//sets cursor POS
void locate(uint8_t col, uint8_t row)
{ 
  uint8_t loc[]= {0xFE,0x47,col,row};
  Serial3.write(loc,4);  
}

//clear screen
void clr ()
{
    uint8_t clearScr[] = {0xFE,0x58};
    Serial3.write(clearScr, 2);
}
void clrRow(uint8_t row)
{
  locate(1,row);
  Serial3.write("                    ");
  
  
}

//consigure pins
void setupDCMotorPins()
{
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(OPA, INPUT);
  pinMode(OPA, INPUT);
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
  
}

//main setup
void setup()
{
  pinMode(SW0, INPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  setupDCMotorPins();
  Serial3.begin(9600);
  clr();
  title();
}

void loop ()
{
  if (digitalRead(SW1)==0)
  {
    analogWrite(IN1,0);
    analogWrite(IN2,255);
  }
  else if (digitalRead(SW2)==0)
  {
    analogWrite(IN1,255);
    analogWrite(IN2,0);
  }
  else if (digitalRead(SW0)==0)
  {
    analogWrite(IN1,0);
    analogWrite(IN2,0);

  }
  int spdMotor= map(analogRead(7),0,1023,0,255);
  int spdDisp= map(analogRead(7),0,1023,0,100);
  delay(100);
  analogWrite(EN,spdMotor);
  delay(100);
  
  locate(16,1);
  Serial3.write("   ");
  locate(16,1);
  Serial3.print(spdDisp);
  

}
