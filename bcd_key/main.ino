#include "bcd.h"
#include "keypad.h"

bcd b;
keypad k;

void setup(){
    b.init();
    k.init();
    Serial.begin(9600);
}

void loop(){
  char x = k.getKey();
  b.setDigit(0);
  b.printChar(x);
}

