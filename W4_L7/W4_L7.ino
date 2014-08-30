unsigned int freq = 1000;
unsigned int time=1000;
unsigned int sw0 = 10;

void setup()
{
  pinMode (sw0, INPUT);
}
void loop()
{
    
  tone (2,freq,time);
  do
  {
    if (digitalRead(sw0)==0)
    {
    stopFreq();
    }
    
    else
    {
    tone (2, freq,time);
    freq+=1000;
    delay(1000);
    }
  }while(freq<10000);
  
  
}
void stopFreq()
{
  noTone(2);
  do{delay(5000);}while(true);  
}
