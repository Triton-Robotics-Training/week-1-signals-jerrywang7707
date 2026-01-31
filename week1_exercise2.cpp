#include "mbed.h"

AnalogIn potential(p15);
DigitalOut led(p5);

int main(){
    int time = 2000;
    while(1){
        double percent = potential.read();
        double on = percent * time;
        double off = time - on;
        
        if(on>0){
            led = 1;
            wait_ms(on);
        }
        if(off>0){
            led = 0;
            wait_ms(off);
        }
    }
}
