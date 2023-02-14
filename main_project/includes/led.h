#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum LED_TYPE{
    LED_TYPE_GNSS = 0,
    LED_TYPE_WAVE,
    LED_TYPE_C_V2X,
    LED_TYPE_5G,
    LED_TYPE_RUN
};

class led{
public:

led();
ofstream ledout[5];

void On(LED_TYPE type);
void Off(LED_TYPE type);
void Out();
// int led_init();


};

led::led(){
    // led_init();
    ledout[LED_TYPE_GNSS].open("/sys/class/gpio/gpio487/value");
    ledout[LED_TYPE_WAVE].open("/sys/class/gpio/gpio488/value");
    ledout[LED_TYPE_C_V2X].open("/sys/class/gpio/gpio489/value");
    ledout[LED_TYPE_5G].open("/sys/class/gpio/gpio490/value");
    ledout[LED_TYPE_RUN].open("/sys/class/gpio/gpio491/value");
    
}

void led::Out(){
    if(g_led_num == 1){
        led::On((LED_TYPE)(g_gpio_num -1));
    }

    else if(g_led_num == 0){
        led::Off((LED_TYPE)(g_gpio_num -1));
    }
    
}

void led::On(LED_TYPE type){
    
    int value = 1;
    ledout[type] << value;
}

void led::Off(LED_TYPE type){

    int value = 0;
    ledout[type] << value;

}
