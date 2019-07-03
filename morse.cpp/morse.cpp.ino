//#include <Adafruit_CircuitPlayground.h>
//#include <Adafruit_Circuit_Playground.h>

#include"Arduino.h"
#include"Morse.h"
Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _dottime=250;
}
void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime);
  digitalWrite(_pin,LOW);
 // delay(250);
  delay(_dottime);
}
void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  //delay(1000);
  delay(_dottime*4);
  digitalWrite(_pin,LOW);
 // delay(250);
  delay(_dottime);
}
void Morse::c_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*3);
}
void Morse::w_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*7); 
}
