#include <iostream>
#include <fstream>
#include <string>

enum LED_TYPE{
    LED_TYPE_GNSS = 0,
    LED_TYPE_WAVE,
    LED_TYPE_C_V2X,
    LED_TYPE_5G,
    LED_TYPE_RUN
};

using namespace std;

extern int g_led_num;
extern int g_gpio_num;


class led{
public:

led();
ofstream ledout[5];

void On(LED_TYPE type);
void Off(LED_TYPE type);
void Out();
// int led_init();


};
