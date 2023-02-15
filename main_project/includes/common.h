#ifndef _COMMON_H_
#define _COMMON_H_

#include <iostream>
#include <fstream>
#include <thread>
#include <string>

#include "../logic/logic.h"

enum OPCODE_TYPE{
    OPCODE_LED = 1,
    OPCODE_TEMP,
    OPCODE_GPS
};

int g_gpio_num, g_led_num, g_insert_num;;


#endif 