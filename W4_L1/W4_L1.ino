int i = 0;

void initLcd(void);

void setup ()
{
  Serial3.begin(9600);
  Serial.begin(9600);
  uint8_t init[] = {0xFE,0x58,0xfe,0x47,9,2};
  
  Serial3.write(init,6);
  Serial3.write("HI");

  return; 
}

void loop ()

{
  
  
}

