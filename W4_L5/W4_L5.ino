unsigned int freq = 2500;
unsigned int time=2000;
unsigned int speaker = 2;  

void setup()
{
}
void loop()
{
  tone (speaker, freq, time);
  do
  {
    delay(5000);
  }while(true);
}
