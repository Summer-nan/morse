#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int word)；
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _word;
};

#endif /*_MORSE_H*/
#include"Arduino.h"
//#include"Morse.h"
Morse::Morse(int word)
{
  pinMode(word,OUTPUT);
  _word=word;
}
void Morse::dot()
{
  digitalWrite(_word,HIGH);
  delay(350);
  digitalWrite(_word,LOW);
  delay(350);
}
void Morse::dash()
{
  digitalWrite(_word,HIGH);

  

  delay(1400);

  digitalWrite(_word,LOW);

 
  delay(350);

}

void Morse::c_space()

{

  digitalWrite(_word,LOW);

  delay(1050);

}

void Morse::w_space()

{

  digitalWrite(_word,LOW);

  delay(2450); 

}


Morse morse(9);
//这是从A到z字母对应的摩尔斯电码。
char MORSE[][4] = {
  {'.', '-', '*', '*'},
  {'-', '.', '.', '.'}, 
  {'-', '.', '-', '.'}, 
  {'-', '.', '.', '*'}, 
  {'.', '*', '*', '*'}, 
  {'.', '.', '-', '.'}, 
  {'-', '-', '.', '*'}, 
  {'.', '.', '.', '.'}, 
  {'.', '.', '*', '*'}, 
  {'.', '-', '-', '-'}, 
  {'-', '.', '-', '*'}, 
  {'.', '-', '.', '.'}, 
  {'-', '-', '*', '*'}, 
  {'-', '.', '*', '*'}, 
  {'-', '-', '-', '*'}, 
  {'.', '-', '-', '.'}, 
  {'-', '-', '.', '-'}, 
  {'.', '-', '.', '*'}, 
  {'.', '.', '.', '*'}, 
  {'-', '*', '*', '*'}, 
  {'.', '.', '-', '*'}, 
  {'.', '.', '.', '-'}, 
  {'.', '-', '-', '*'}, 
  {'-', '.', '.', '-'}, 
  {'-', '.', '-', '-'}, 
  {'-', '-', '.', '.'}  
};
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  String num1 = "";
  String morses = "";
  int i, t , temp = 0;
  int n = 0; 
  while (Serial.available() > 0)
  {
    temp = 1;
    num1 =num1+ char(Serial.read());
    delay(2); 
    n++;
  }
  if (temp)
  {
    for (i = 0; i < n; i++)
    {
       for (t = 0; t < 4; t++)
      {
        if (num1[i] >= 97 && num1[i] <= 122)
        {
          morses += char(MORSE[int(num1[i] - 97)][t]);
        }
      }
      morses += ' ';
    }
   Serial.println(morses);  //串口传入
    for (i = 0; morses[i]!='\0' ; i++)//从头到尾读取莫尔斯电码
    {
      if (morses[i] == '.')
      morse.dot();
      else if (morses[i] == '-')
      morse.dash();
      else if (morses[i] == ' ')
      morse.w_space();
      if (morses[i] != ' ' && num1[i] != '*')
      morse.c_space();
    }
    Serial.println("发送完毕");
    delay(2);
  } 
  }
