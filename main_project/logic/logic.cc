#include "logic.h"

void led_proc()
{

    led led;

    cout << "This is LED Controller" << endl;
    cout << "Please Choose What Led You Want to Control" << endl;
    cout << "1.GNSS LED    2.WAVE LED    3.C-V2X LED    4.5G LED    5.RUN LED    6.EXIT" << endl;
    cin >> g_gpio_num;
    cout << "Select Your LED Status Insert ( 0 is off, 1 is on)" << endl;
    cin >> g_led_num;
    led.Out();

}

void temp_proc()
{
    
    int temp_init;

    temperature temp;

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

void gps_proc(){


}