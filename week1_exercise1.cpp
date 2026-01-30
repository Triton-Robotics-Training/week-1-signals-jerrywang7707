#include "mbed.h"

DigitalIn button(BUTTON1);
DigitalOut led(LED1);

int main() {
    while (1) {
        if(button == 1){
            led = 1;
        }
        else{
            led = 0;
        }
    }
}
