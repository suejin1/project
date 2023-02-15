#include "logic.h"
#include "../includes/led.h"

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
