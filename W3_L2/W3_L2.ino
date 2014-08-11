const char alpha[]= "abcdefghigklmnopqrstuvwxyz";
int switch1 = 10;
int i = 0;
void setup()
{
  pinMode(switch1, INPUT);
  Serial.begin(9600);
}

void loop()
{
   
 while(digitalRead(switch1)==0)
  {
   
    Serial.println(alpha[i]);
    i++;
    if(i>=26){i=0;}
    delay(100);
    
    }
  } 

