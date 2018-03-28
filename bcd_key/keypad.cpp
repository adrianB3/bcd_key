#include "keypad.h"

bcd bb;

void keypad::init(){
    DDRA = B00001111;
}

char keypad::getKey(){
    byte rows[] = {0x01, 0x02, 0x04, 0x08};
    byte cols[] = {0x10, 0x20, 0x40, 0x80};
    char keys[4][4] = {{1,2,3,'A'},{4,5,6,'B'},{7,8,9,'C'},{'*',0,'#','D'}};

    for(int i = 0; i<4; i++){
        PORTA = rows[i];
        for(int j = 0;j<4;j++){
            if((PINA & cols[j]) == cols[j]){
                return keys[i][j];
            }
        }
    }
    return NO_KEY;
}