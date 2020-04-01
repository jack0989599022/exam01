#include "mbed.h"
PwmOut PWM1(D6);

int main(){

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