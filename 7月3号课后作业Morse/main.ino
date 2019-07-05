#include"Morse.h"
Morse morse(9);
//A到z摩尔斯电码的表示形式
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

    delay(3);

  }  }
