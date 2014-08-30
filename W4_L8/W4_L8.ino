unsigned int A07=7;

void setup()
{}
void loop()
{

  int freq = analogRead(A07);
  freq = map(freq,0,1023,100,700);
  tone (2,freq,0);
  delay (100);  
  
}



