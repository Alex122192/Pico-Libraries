#include "pico/stdlib.h"
#include "pico/time.h"
#include "Ultrasonic.h"

//In this Constructor configure the pins to use for the Ultrasonic sensor 
Ultrasonic::Ultrasonic(int Echo, int Trig){
    this->Echo = Echo;
    this->Trig = Trig;

    gpio_init(Echo),
    gpio_init(Trig);
    gpio_set_dir(Echo, GPIO_IN);
    gpio_set_dir(Trig, GPIO_OUT);
    gpio_put(Trig, 0);
}

//Function for medition of time for the echo pin
void Ultrasonic::time_on(){
    int aux = 0;
    uint64_t t1,t2;
    gpio_put(Trig, 0);
    sleep_us(2);
    gpio_put(Trig, 1);
    sleep_us(10);
    gpio_put(Trig, 0);
    
    while(!(gpio_get(Echo))){
    }

    while((gpio_get(Echo))){
        if(aux == 0){
            t1 = time_us_64();
            aux++;
        }
    }
    t1 = time_us_64() - t1;
    t = (float) (t1-t2) ;
}

//Calculate distance in cm
float Ultrasonic::get_distance_cm(){
    float cm;
    time_on();
    cm = t / 58;
    return cm;
}

//Calulate distance on IN
float Ultrasonic::get_distance_in(){
    float in;
    time_on();
    in = (t / 58)/2.54;
    return in;
}
