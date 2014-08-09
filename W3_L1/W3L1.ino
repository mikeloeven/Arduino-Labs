const char alpha[]= "abcdefghigklmnopqrstuvwxyz";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
 do
  {
  for(int i = 0; i<26; i++)
    {
    Serial.println(alpha[i]);
    delay(100);
    }
  }while(1); 
}
