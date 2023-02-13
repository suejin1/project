#include <iostream>
#include <fstream>
#include <string>

#include "../includes/led.h"
#include "../includes/temp.h"
#include "../includes/gps.h"

using namespace std;

extern int control_init;

enum opcode{
    opcode_led = 0,
    opcode_temp,
    opcode_gps
};


class logic{
public:

    led();
    ofstream ledout[5];

    void led_out();
    void temp_out();
    void gps_out();

//     void On(LED_TYPE type);
// void Off(LED_TYPE type);
// void Out();
// // int led_init();
};