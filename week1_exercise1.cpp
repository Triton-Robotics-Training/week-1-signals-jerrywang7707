#include "mbed.h"

DigitalIn button(p5);
DigitalOut led(LED1);
bool button_old = 0;
int main() {
    while (1) {
        if(button && !button_old){
            led=!led;
        }
    }
}
