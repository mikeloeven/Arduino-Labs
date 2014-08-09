const char fName[] = "Mike";
const char lName[] = "Loeven";
const int ze_svitch = 10;

void setup ()
{
 
 pinMode(ze_svitch, INPUT); 
 Serial.begin(9600);
 
}

void loop()
{
  
    while (digitalRead(ze_svitch)==1)
    {
      
        Serial.print(fName);
        Serial.print(" ");
        Serial.println(lName);
        
        delay(5000);
        
      
    }
  
}
