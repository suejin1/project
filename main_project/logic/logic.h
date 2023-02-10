#include <iostream>
#include <fstream>
#include <thread>
#include <string>

enum opcode{
    opcode_led = 1,
    opcode_temp,
    opcode_gps
};

class logic{
public:

char buf[1024];

void led_proc();
void temp_proc();
void gps_proc();

};