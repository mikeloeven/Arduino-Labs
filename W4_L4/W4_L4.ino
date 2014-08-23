int i = 0;

void initLcd(void);

void setup ()
{
  Serial3.begin(9600);
  Serial.begin(9600);
  uint8_t init[] = {254,88,254,110,254,35,9,7,254,66,0};
  
  Serial3.write(init,11);

  return; 
}

void loop ()

{
  
  
}

