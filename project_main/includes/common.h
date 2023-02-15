#ifndef _COMMON_H_
#define _COMMON_H_

#include <iostream>
#include <fstream>
#include <string>

#include "ledfunc.h" 
#include "tempfunc.h"

using namespace std;

enum UI_INSERT
{
    UI_LED = 0,
    UI_TEMP,
    UI_GPS
}init;

int gpio_num, led_num;
int temp_sensor;

class UI_MAIN
{
    public:

    void main_ui_init();
};

#endif