extern int g_led_num;
extern int g_gpio_num;

class led{
    public:


    led();
    ofstream ledout[5];

    void On(LED_TYPE type);
    void Off(LED_TYPE type);
    void Out();
};