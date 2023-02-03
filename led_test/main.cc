#include <iostream>
#include <fstream>
#include "func/ledfunc.h"

using namespace std;

int main(){

    led led;

    cout << "This is LED Controller" << endl;
    cout << "Please Choose What Led You Want to Control" << endl;
    cout << "1.RUN LED    2.5G LED    3.C-V2X LED    4.WAVE LED    5.GNSS LED    6.EXIT" << endl;
    cin >> gpio_num;
    led.out;
    cout << "Select Your LED Status Insert ( 0 is off, 1 is on)" << endl;
    cin >> led_num;

    led.led_status;

}

