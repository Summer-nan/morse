void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
 // pinMode(5, OUTPUT);
  Serial.begin(9600);
}

int t=0;
void loop()
{
  if(Serial.available()>0)
  {
     t=Serial.read();
      t=t-'0';
  }
  digitalWrite(6,LOW);
  delay(5);
  
  if(t&0x1)
   digitalWrite(2,HIGH);
  else
  digitalWrite(2,LOW);
  
   if((t>>1)&0x1)
   digitalWrite(3,HIGH);
    else
    digitalWrite(3,LOW);
  
  if((t>>2)&0x1)
   digitalWrite(4,HIGH);
  else
  digitalWrite(4,LOW);
  
  if((t>>3)&0x1)
   digitalWrite(5,HIGH);
  else
  digitalWrite(5,LOW);
 delay(5);
}
