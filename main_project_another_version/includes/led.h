#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int value;

enum LED_TYPE{
    LED_TYPE_GNSS = 0,
    LED_TYPE_WAVE,
    LED_TYPE_C_V2X,
    LED_TYPE_5G,
    LED_TYPE_RUN
};

class led(){
    public:

    ledtype();
    ofstream ledout[5];

    void led_out();
    void led_on(LED_TYPE type);
    void led_out(LED_TYPE type);
};

void led::on(){
    int value = 1;
    ledout[type] << value;
}

void led::off(){
    int value = 0;
    ledout[type] << value;
}

led::ledtype(){
    // led_init();
    ledout[LED_TYPE_GNSS].open("/sys/class/gpio/gpio487/value");
    ledout[LED_TYPE_WAVE].open("/sys/class/gpio/gpio488/value");
    ledout[LED_TYPE_C_V2X].open("/sys/class/gpio/gpio489/value");
    ledout[LED_TYPE_5G].open("/sys/class/gpio/gpio490/value");
    ledout[LED_TYPE_RUN].open("/sys/class/gpio/gpio491/value");

}

void led::led_out(){
    if(led_num == 1){
        led::on((LED_TYPE)(gpio_num -1));
    }

    else if(led_num == 0){
        led::off((LED_TYPE)(gpio_num -1));
    }
}


