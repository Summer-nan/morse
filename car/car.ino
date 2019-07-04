void setup() {
  pinMode(0,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(0,OUTPUT);
}

void loop() {
   digitalWrite(4,LOW);
   delay(500);
   digitalWrite(0,LOW);
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   delay(500);
   digitalWrite(6,LOW);
   delay(500);
}
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.availabl;
  }
  income=income-'0';
}
