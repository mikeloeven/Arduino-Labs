void setup()
{
  
  Serial.begin(9600);
  
  
}

void loop()
{
  //loop through alpha
  int count = 0x61;
  
  do
  {
    //write out i as ASCII
    Serial.write(count);
    //incriment count
    count++;    
  }
  while(count<=0x7A);
  
  //catch program in infinate loop to stop execution
  while(true)
  {
    delay(5000);
  }
  
}
