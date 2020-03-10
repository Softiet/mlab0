#include "mbed.h"


DigitalOut gpo(D0);

DigitalOut led(LED_GREEN);


int main()

{

   while (true) {

       gpo = !gpo; // toggle pin

       led = !led; // toggle led

       wait(0.2f);

   }

}