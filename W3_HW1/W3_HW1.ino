void setup()
{
  
  Serial.begin(9600);
  
  
}

void loop()
{
  //loop through alpha
  for(int i = 0x61;i<=0x7A;i++)
  {
    
    //write out i as ASCII
    Serial.write(i);
    
    
  }
  //catch program in infinate loop to stop execution
  while(true)
  {
    delay(5000);
  }
  
}
