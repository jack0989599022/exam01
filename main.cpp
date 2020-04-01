#include "mbed.h"
#include "uLCD_4DGL.h"

PwmOut PWM1(D6);
uLCD_4DGL uLCD(D1, D0, D2);

int main(){
    
    uLCD.printf("\n107000118\n"); //Default Green on black text
    uLCD.rectangle(100, 100, 40, 40, 0x0000FF);
      wait(30);

  PWM1.period(0.01);
  float i;
  while(1){
    for( i=0; i<1; i+=0.1 ){
      PWM1 = i;
      wait(0.01);
    }
    for( i=1; i>0; i-=0.1 ){
      PWM1 = i;
      wait(0.01);
    }
  }
}