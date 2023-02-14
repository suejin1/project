#include <iostream>
#include <fstream>
#include <thread>
#include <string>

#include "../includes/gps.h"
#include "../includes/led.h"
#include "../includes/temp.h"

enum OPCODE_TYPE{
    OPCODE_LED = 1,
    OPCODE_TEMP,
    OPCODE_GPS
};

class logic{
public:


int led_init;
int temp_init;
int gps_init;

void led_proc(OPCODE_TYPE type);
void temp_proc(OPCODE_TYPE type);
void gps_proc(OPCODE_TYPE type);
};
