#include <iostream>
#include <fstream>
#include <thread>
#include <string>

#include "../includes/gps.h"
#include "../includes/led.h"
#include "../includes/temp.h"



int temp_init;
int led_init;
int gps_init;

class logic{
public:

void led_proc();
void temp_proc();
void gps_proc();
};

temperature temp;

void led_proc(){

    cout << "Temperature Sensor Management Program" << endl;
    cout << "Please Select Temperature Sensor" << endl;
    cout << " 1. temp_zone0    2. temp_zone1" << endl;
    cin >> temp_init;

    if(temp_init == 1){
        temp.temp_zone0();
    }

    else if(temp_init == 2){
        temp.temp_zone1();
    }
}

void temp_proc(){


}

void gps_proc(){


}