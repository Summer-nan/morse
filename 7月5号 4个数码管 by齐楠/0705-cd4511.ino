void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}
int i=0,h=0;
int a[4]={0};
int p=8;

void loop()
{
  if(Serial.available()>0)
  {
    int k;
    //for(i=0;i<4;i++)
    //{
      k=Serial.read();
      a[i]=k%10;
      a[i]=a[i]-'0';
     digitalWrite(p,LOW);
    delay(30);
    if(a[i]&0x1)
    {
      digitalWrite(2,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
    }
    if((a[i]>>1)&0x1)
    {
      digitalWrite(3,HIGH);
    }
    else
    {
      digitalWrite(3,LOW);
    }
    if((a[i]>>2)&0x1)
    {
      digitalWrite(4,HIGH);
    }
    else
    {
      digitalWrite(4,LOW);
    }
    if((a[i]>>3)&0x1)
    {
      digitalWrite(5,HIGH);
    }
    else
    {
      digitalWrite(5,LOW);
    }
     digitalWrite(p,HIGH);
     delay(3);
    p++;
    i++;
    k=k/10;
    delay(3);
  }
 }

    else
    {
      digitalWrite(5,LOW);
    }
    digitalWrite(jiekou,HIGH);
    delay(3);
    jiekou++;
    h++;
    delay(3);
  }
 }
