int VA7=7;
uint8_t initLcd[] = {254,88,254,104};
int arrlen = sizeof(initLcd);
void setup ()
{
  Serial3.begin(9600);
  Serial.begin(9600);
  //send sequence to lcd
  Serial3.write(initLcd,arrlen);
 }

void loop ()

{
uint8_t aValue = map(analogRead(A7),0, 1023, 0, 100);
uint8_t bar[] = {254,124,1,2,0,aValue};

Serial3.write(bar,6);
delay(100);

  
  
}

