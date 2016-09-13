int tombol1 = A0;
int tombol2 = A1;
int tombol3 = A2;


int LED;

void setup()
{
  for(LED=8; LED<12; LED++)
  {pinMode(LED, OUTPUT);}
   pinMode(tombol1, INPUT);
   pinMode(tombol2, INPUT);
   pinMode(tombol3, INPUT);

}

void loop() 

{ 
  if (digitalRead(tombol1)==HIGH)
  { 
 
    for(int b=8; b<12; b++)
  
{     
      digitalWrite(b,HIGH);
      delay(500);
      digitalWrite(b,LOW);
      delay(500);}
    
  
  } 

else  if(digitalRead(tombol3)==HIGH);
   {
    PORTB=0x00;
   } 
else if (digitalRead(tombol2)==HIGH)
   {
  for(int b=11; b>7; b--)
    {   
      digitalWrite(b,HIGH);
      delay(500);
      digitalWrite(b,LOW);
      delay(500);
      
      
     }}}
      
      
  
  
  


