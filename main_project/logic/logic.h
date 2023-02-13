#include <iostream>
#include <fstream>
#include <thread>
#include <string>

#include "../includes/gps.h"
#include "../includes/led.h"
#include "../includes/temp.h"

class logic{
public:
int temp_init;
int led_init;
int gps_init;
char buf[1024];

void led_proc();
void temp_proc();
void gps_proc();
};