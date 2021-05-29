#include <iostream>
#include "pico/stdlib.h"
#include "Ultrasonic.h"

using namespace std;

int main (void){
    //Init the uart comunication for usb conection
    stdio_init_all();

    //Configure pins "Echo" and "Trig"
    int Echo = 13, Trig = 14;

    //Init the Ultrasonic device 
    Ultrasonic u1 (Echo, Trig);

    while(1){
        //print the distance in cm and inches for the medition of the ultrasonic sensor each second 
        cout << u1.get_distance_cm() << " cm" << endl;
        cout << u1.get_distance_in() << "in" << endl;
        sleep_ms(1000);
    }
    return 0;
}