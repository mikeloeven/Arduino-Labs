const char alpha[]= "abcdefghigklmnopqrstuvwxyz";
int switch0 = 10;
int switch1 = 11;
int switch2 = 12;
int i = 0;
void setup()
{
  pinMode(switch0, INPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  do
   {   
    Serial.println(alpha[i]);
    i++;
    if(i>=26){i=0;}
    delay(100);  
   }
   while(digitalRead(switch1)==0&&digitalRead(switch2)==0); 
   while(digitalRead(switch1)==1||digitalRead(switch2)==1)
   {
     if(digitalRead(switch0)==0)
     {
       while(1)
       {
       delay(5000);
       }
     }
     else delay(100);
   } 
   
   
  } 

