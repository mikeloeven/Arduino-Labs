int SW0 = 10;
int SW1 = 11;
int SW2 = 12;
int IN1 = 9;
int IN2 = 7;
int EN = 8;
int OPA = 6;
int OPB = 5;
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


void setup()
{
  pinMode(SW0, INPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  setupDCMotorPins();
  Serial3.begin(9600);
}

void loop ()
{
  if (digitalRead(SW1)==0)
  {
    analogWrite(IN1,0);
    analogWrite(IN2,255);
    analogWrite(EN,255);
  }
  else if (digitalRead(SW2)==0)
  {
    analogWrite(IN1,255);
    analogWrite(IN2,0);
    analogWrite(EN,255);
  }
  else if (digitalRead(SW0)==0)
  {
    analogWrite(IN1,0);
    analogWrite(IN2,0);
    analogWrite(EN,0);
  }
}
