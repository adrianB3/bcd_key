#include "bcd.h"

void bcd::init(){
    //segments
  DDRE = B00111000;
  DDRG = B00100001;
  DDRH = B01111000;
  DDRD = B10000000;

  //digits
  DDRB = B11110000;
}

void bcd::printChar(char character){
    bcd::clearDisp();
    switch(character){
        case 0: a();b();c();d();e();f(); break;
        case 1: b();c(); break;
        case 2: a();b();g();e();d(); break;
        case 3: a();b();c();d();g(); break;
        case 4: b();c();g();f(); break;
        case 5: a();f();g();c();d(); break;
        case 6: a();f();e();d();c();g(); break;
        case 7: a();b();c(); break;
        case 8: a();b();c();d();e();f();g();break;
        case 9: a();b();c();d();f();g();break;
        case 'A': e();f();a();b();c();g();break;
        case 'B': c();d();e();f();g();break;
        case 'C': a();f();e();d(); break;
        case 'D': b();c();d();e();g(); break;
        case 'E': a();e();f();g();d();break;
        case 'F': a();e();f();g();break;
        case 'G': a();f();e();d();c();g(); break;
        case 'H': b();c();g();e();f(); break;
        case 'I': b();c(); break;
        case 'J': b();c();d();break;
        case 'K': e();f();g();break;
        case 'L': e();f();d();break;
        case 'M': e();f();a();b();c();h(); break;
        case 'N': e();f();a();b();c();break;
        case 'O': c();d();e();g(); break;
        case 'P': a();b();g();e();f();break;
        case 'Q': a();b();c();d();e();f();h(); break;
        case 'R': e();g();break; 
        case 'S': a();f();g();c();d(); break;
        case 'T': a();e();f();break; //??
        case 'U': b();c();d();e();f();break;
        case 'V': break; //?
        case 'x': break;
        case '*': bcd::printWord("STAR"); break;
        case '#': bcd::printWord("HASH"); break;
        case 'Z': a();b();d();e(); break;
        case '=': g();d();break;
        default: 
                h();
                 break;
      }
  }

void bcd::clearDisp(){
    aOff();bOff();cOff();dOff();eOff();gOff();hOff();fOff();
  }

void bcd::setDigit(int digit){
    PORTB = B11110000;
    switch(digit){
        case 0: PORTB = B11100000; break;
        case 1: PORTB = B11010000; break;
        case 2: PORTB = B10110000; break;
        case 3: PORTB = B01110000; break;
        case 4: PORTB = B00000000; break;
      }
  }

void bcd::printWord(String str){

    for(unsigned int i=0;i<str.length();i++){      
        setDigit(i);
        printChar((char)str[i]);
        delay(5);
    }
}
