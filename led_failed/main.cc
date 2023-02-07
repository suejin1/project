#include<iostream>
#include<fstream>
#include<string>

#include "leds/led.h"

using namespace std;

int num,g_num;

int main(){

    led_logic logic;

    std::cout << "LED control Program" << endl;
    std::cout << "--------------------" << endl;
    std::cout << "Please Choose control pannel" << endl;
    std::cout << "--------------------" << endl;
    std::cout << "1.Power_LED 2.5G_LED 3.C-V2X_LED 4.WAVE_LED 5.GNSS_LED" "6.EXIT"<< endl;
    std::cin >> num;
    logic();


    return 0;
}
