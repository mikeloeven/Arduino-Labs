byte counter = 25;

void setup ()
{
  Serial.begin(9600);
  
}

void loop ()
{
    while (counter <= 100)
    {
      
       Serial.print(counter, DEC);
       Serial.print("     ");
       Serial.print(counter, HEX);
       Serial.print("     ");
       Serial.write(counter);
       counter ++;
      
    }
  
}
