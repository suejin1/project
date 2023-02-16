#include "ui_main.h"
// #include "ledfunc.h" 
// #include "tempfunc.h"


void UI_MAIN::main_ui_init()
{   
    UI_MAIN main;
    led led;
    // temperature temp;

    if(static_cast<int>(main.insert = UI_INSERT::UI_LED))
    {
        // led.main();
        cout << "This is Led Control System!" << endl;
        cout << "Please Insert Number of You Want to Control!!!" << endl;
        cout << "1.GNSS_LED    2.WAVE_LED    3.C_V2X_led    4.5G_LED    5.RUN_LED    6.EXIT" << endl;
        cin >> led.gpio_num;
        cout << "Select Yout LED Status Insert (0 is off, 1 is on)" << endl;
        cin >> led.led_num;

        led.Out();
    }
        // case UI_TEMP:
        // temp.Temp_Out();
        // break;
}