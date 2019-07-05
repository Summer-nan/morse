#include"Arduino.h"
#include"Morse.h"
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
