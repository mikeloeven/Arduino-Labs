int sw = 10;
int cnt = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(10, INPUT);
  DDRL = 0xFF;
  PORTL = 0x00;
  
}

void loop()
{
  
  switch(digitalRead(sw))
  {
  case true:
    PORTL--;
    Serial.println(PORTL, HEX);
    break;
  case false:
    PORTL++;
    Serial.println(PORTL, HEX);
    break;
  default: 
    delay(1000);
    Serial.println("Error In Program");
    break;
  }
    
  
  
  
}

