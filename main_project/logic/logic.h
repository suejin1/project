#include <iostream>
#include <fstream>

using namespace std;

extern int g_gpio_num, g_led_num;

enum LED_TYPE{
    LED_TYPE_GNSS = 0,
    LED_TYPE_WAVE,
    LED_TYPE_C_V2X,
    LED_TYPE_5G,
    LED_TYPE_RUN
};

class logic{
    public:

    void led_proc();
};