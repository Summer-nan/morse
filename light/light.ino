void setup(){  
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);  
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  Serial.begin(9600);
  }
  int income=0;
  void loop()
  {  if(Serial.available()>0) 
     {  
      income=Serial.read();      
        switch(income)       
        {         
          case 'f':forward();break; 
          case 'b':backward();break;   
          case 'l':left();break;     
          case 'r':right();break;       
          case 's':stop();break;   
          default:break;    
          }   
      }
  }
  void forward()
  {  digitalWrite(5,HIGH); 
     digitalWrite(6,LOW);
     digitalWrite(9,HIGH); 
     digitalWrite(10,LOW);
  }
  void backward()
  {  digitalWrite(6,HIGH); 
     digitalWrite(5,LOW);  
     digitalWrite(10,HIGH);
     digitalWrite(9,LOW);
  }
  void left()//并联控制
  {  
    digitalWrite(5,HIGH);
    while(1)
    {
      digitalWrite(3,HIGH);
     delay(250);
     digitalWrite(4,LOW);
     delay(250);
    }
    digitalWrite(6,LOW); 
    digitalWrite(10,HIGH); 
    digitalWrite(9,LOW);
   }
 void right()
   {  digitalWrite(6,HIGH); 
      digitalWrite(5,LOW);  
      digitalWrite(9,HIGH);
     digitalWrite(10,LOW);
       while(1)
      {
      digitalWrite(7,HIGH);
      delay(250);
      digitalWrite(8,LOW);
      delay(250);
    }
    }
  void stop()
   {  
    digitalWrite(5,LOW); 
    digitalWrite(6,LOW); 
    digitalWrite(9,LOW); 
    digitalWrite(10,LOW);
    }
