#ifndef __BCD_H_INCLUDED__
#define __BCD_H_INCLUDED__

#define a() PORTH |= 0x40;
#define b() PORTE |= 0x10;
#define c() PORTE |= 0x20
#define d() PORTD |= 0x80; 
#define e() PORTH |= 0x08;
#define f() PORTH |= 0x20;
#define g() PORTH |= 0x10;
#define h() PORTG |= 0x20;

#define aOff() PORTH &= ~0x40;
#define bOff() PORTE &= ~0x10;
#define cOff() PORTE &= ~0x20
#define dOff() PORTD &= ~0x80; 
#define eOff() PORTH &= ~0x08;
#define fOff() PORTH &= ~0x20;
#define gOff() PORTH &= ~0x10;
#define hOff() PORTG &= ~0x20;

#include<Arduino.h>


class bcd {
private:

public:
    bcd(){}
    void init();
    void setDigit(int digit);
    void printChar(char character);
    void printWord(String str);
    void clearDisp();
};

#endif
