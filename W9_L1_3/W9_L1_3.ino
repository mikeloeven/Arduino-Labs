#include <Servo.h>

//Labs 1-3 require simply moving the servo to two positions this program acomplishes all of these requirements each position is bound to a button.

Servo myservo;
int pos = 0;
int SW0 = 10;
int SW1 = 11;
int SW2 = 12;

void setup()
{
  myservo.attach(15);
  pinMode(SW0, INPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
}


void loop()
{
  
  if (digitalRead(SW0)==0)
  {
    myservo.write(0);
  }
  if (digitalRead(SW1)==0)
  {
    myservo.write(180); 
  }
  if (digitalRead(SW2)==0)
  {
    myservo.write(90);
  }
  
}


