#include "ui_main.h"
// #include "ledfunc.h" 
// #include "tempfunc.h"


void UI_MAIN::main_ui_init()
{   
    UI_MAIN main;
    led led;
    // temperature temp;

    if(static_cast<int>(UI_INSERT::UI_LED) == main.insert -1)
    {
        cout << "This is LED Controller" << endl;
        cout << "Please Choose What Led You Want to Control" << endl;
        cout << "1.GNSS LED    2.WAVE LED    3.C-V2X LED    4.5G LED    5.RUN LED    6.EXIT" << endl;
        cin >> led.gpio_num;
        cout << "Select Your LED Status Insert ( 0 is off, 1 is on)" << endl;
        cin >> led.led_num;
        led.Out();

    }
        // case UI_TEMP:
        // temp.Temp_Out();
        // break;
}