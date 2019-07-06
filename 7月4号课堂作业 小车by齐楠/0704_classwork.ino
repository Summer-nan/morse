void setup(){  

  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(6, OUTPUT);  
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  Serial.begin(9600);
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
     digitalWrite(6,LOW); 
     digitalWrite(10,HIGH); 
     digitalWrite(9,LOW);
    
     digitalWrite(11,HIGH);
     digitalWrite(12,LOW);
    // digitalWrite（3,HIGH);
     //digitalWrite(4,HIGH);
   }
 void right()
   { 
      digitalWrite(6,HIGH); 
      digitalWrite(5,LOW);  
      digitalWrite(9,HIGH);
     digitalWrite(10,LOW); 
   
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
     // digitalWrite（11,HIGH);
     // digitalWrite(12,HIGH);   
    }
  void stop()
   {  
    digitalWrite(5,LOW); 
    digitalWrite(6,LOW); 
    digitalWrite(9,LOW); 
    digitalWrite(10,LOW);
    }
  int s=0;
  void loop()
  { 
    if(Serial.available()>0) 
    {  
      s=Serial.read();      
        switch(s)       
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
