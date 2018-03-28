#include "bcd.h"
#include "keypad.h"

bcd b;
keypad k;
char state = 'f',prevState = 'f';
char op[2];
void calculator(){
  char keyPressed = k.getKey();
  if(keyPressed == 'C' && prevState == 'f'){
    if(state == 'o'){
      state = 'f';
    }
    else {
      state = 'o';
    }
  }

  if(state == 'o'){
    b.printChar(keyPressed);
  }else {
    //b.b.clearDisp();
  }
  

  keyPressed == 'C' ? prevState = 'o':prevState = 'f'; 
}

void animation1() {
  for(int i = 0;i<4;i++){
      b.clearDisp();
    b.setDigit(i);
      a();
      delay(100);
    } 
b.setDigit(3); b(); delay(100); c(); delay(100);

  for(int i = 3;i>=0;i--){
      b.clearDisp();
    b.setDigit(i);
      d();
      delay(100);
    } 
b.setDigit(0); e(); delay(100); f(); delay(100);
  
  }

void animation2() {
    b.clearDisp();
  b.setDigit(0);
    d(); delay(100); e(); delay(100); f();delay(100); a(); delay(100);
    b.clearDisp();
  b.setDigit(1);
    a(); delay(100); b(); delay(100); c(); delay(100); d(); delay(100);
    b.clearDisp();
    delay(100);
  b.setDigit(2);
    d(); delay(100); e(); delay(100); f();delay(100); a(); delay(100);
    b.clearDisp();
  b.setDigit(3);
    a(); delay(100); b(); delay(100); c(); delay(100); d(); delay(100);
    
  }

void animation3(){
    b.clearDisp();
  b.setDigit(4);
    a(); delay(50); b.clearDisp();
    b(); delay(50); b.clearDisp();
    c(); delay(50); b.clearDisp();
    d(); delay(50); b.clearDisp();
    e(); delay(50); b.clearDisp();
    f(); delay(50); b.clearDisp();   
  }

void animation4(){
    for(char i = 'A'; i < 'G'; i++){
        b.clearDisp();
        for(int j = 0; j<4;j++){
          b.setDigit(j);
            b.printChar(i);
            delay(300);
          }
      }
  }

void animation5(){
  
    b.clearDisp();
  b.setDigit(0);
    a();
    delay(100);
    
  b.setDigit(1);
    a();
    delay(100);
    
    b.clearDisp();
    
  b.setDigit(2);
    f(); delay(100); e(); delay(100); d(); delay(100);
  b.setDigit(3);
    
    b.clearDisp();
    
    d(); delay(100); c(); delay(100); b(); delay(100); a(); delay(100);
  b.setDigit(2); 
    
    b.clearDisp();
    
    a(); delay(100); f(); delay(100); e(); delay(100);
  b.setDigit(1);
    
    b.clearDisp();
    
    d(); delay(100);
  b.setDigit(0);
    
    b.clearDisp();
    
    d(); delay(100); e(); delay(100); f(); delay(100);
  
  }

void setup(){
    b.init();
    k.init();
}

void loop(){
  char x = k.getKey();
  b.setDigit(3);
  b.printChar(x);
  if(x == 'A'){
    animation1();
  }
  if(x == 'B'){
    animation2();
  }
  if(x == 'C'){
    animation3();
  }
  if(x == 'D'){
    animation1();
    animation5();
  }
}



