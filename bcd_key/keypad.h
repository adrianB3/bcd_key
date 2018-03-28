#ifndef __KEYPAD_H_INCLUDED__
#define __KEYPAD_H_INCLUDED__
#define NO_KEY 'x'
#include "bcd.h"

class bcd;

class keypad {
private:

public:
    keypad(){}
    void init();
    char getKey();
};

#endif