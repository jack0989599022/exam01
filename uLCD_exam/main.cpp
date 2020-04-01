#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
      uLCD.printf("\n107000118\n"); //Default Green on black text
    uLCD.rectangle(100, 100, 40, 40, 0x0000FF);
      wait(30);
}