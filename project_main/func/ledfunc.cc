#include "../includes/ledfunc.h"

void led::led_out()
{
    // led_init();
    ledout[LED_TYPE_GNSS].open("/sys/class/gpio/gpio487/value");
    ledout[LED_TYPE_WAVE].open("/sys/class/gpio/gpio488/value");
    ledout[LED_TYPE_C_V2X].open("/sys/class/gpio/gpio489/value");
    ledout[LED_TYPE_5G].open("/sys/class/gpio/gpio490/value");
    ledout[LED_TYPE_RUN].open("/sys/class/gpio/gpio491/value");

}

// void led::main()
// {
//     // cout << "This is Led Control System!" << endl;
//     // cout << "Please Insert Number of You Want to Control!!!" << endl;
//     // cout << "1.GNSS_LED    2.WAVE_LED    3.C_V2X_led    4.5G_LED    5.RUN_LED    6.EXIT" << endl;
//     // cin >> gpio_num;
//     // cout << "Select Yout LED Status Insert (0 is off, 1 is on)" << endl;
//     // cin >> led_num;

//     // led::Out();
// }


void led::On(LED_TYPE type)
{
    int value = 1;
    ledout[type] << value;
}


void led::Off(LED_TYPE type)
{
    int value = 0;
    ledout[type] << value;

}


void led::Out()
{
    if(led::led_num == 1){
        led::On((LED_TYPE)(gpio_num -1));
    }

    else if(led::led_num == 0){
        led::Off((LED_TYPE)(gpio_num -1));
    }
}





// int led::led_init()
// {
    
// }