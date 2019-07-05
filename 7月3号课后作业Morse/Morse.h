#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int word);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _word; 
};

#endif /*_MORSE_H*/
