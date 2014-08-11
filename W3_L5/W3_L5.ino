int cnt = 0;
char name[11] = {'M','i','k','e',' ','l','o','e','v','e','n'};

void setup ()
{
  Serial.begin(9600);
}
void loop ()
{
  
    do
    {
     if (cnt > 11) cnt=0; 
     Serial.write(name[cnt]);
     cnt++; 
     delay(333); 
      
      
    }while(1);
    
    
    
    
    
  }


