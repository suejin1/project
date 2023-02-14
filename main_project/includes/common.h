#ifndef _COMMON_H_
#define _COMMON_H_

#include <thread>
#include <fstream>
#include <iostream>
#include <string>

#include "gps.h"
#include "led.h"
#include "temp.h"

enum OPCODE_TYPE{
    OPCODE_LED = 1,
    OPCODE_TEMP,
    OPCODE_GPS
};

int g_opcode_num;
int g_led_num;
int g_gpio_num;
int g_temp_num;


#endif 