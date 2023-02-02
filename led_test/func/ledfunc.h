#include <iostream>
#include <fstream>

#define SYS_GPIO_DIR "/sys/class/gpio"

class LED{
    public:
    std::ofstream out;
    int led_status, gpio_status;

    void Out();
    void On();
    void Off();
};

enum gpio{
    gpio487 = 487,
    gpio488,
    gpio489,
    gpio490,
    gpio491,
};

void LED::Out(){
    out.open(SYS_GPIO_DIR);
    if(out.is_open()){
        std::cout << "Please Insert Led Status ( 0 is lightout, 1 is light on )" << std::endl;
        std::cin >> led_status;
        std::cout << "Please Insert Led Control" << std::endl;
        std::cout << "1.Power_LED 2.5G_LED 3.C-V2X_LED 4.WAVE_LED 5.GNSS_LED" "6.EXIT"<< std::endl;
        std::cin >> gpio_status;
        if(gpio_status = 487){
            out.open("gpio487/value", std::ios::ate);
        }
        else if(gpio_status = 488){
            out.open("gpio488/value", std::ios::ate);
        }
        else if(gpio_status = 489){
            out.open("gpio489/value", std::ios::ate);
        }
        else if(gpio_status = 490){
            out.open("gpio490/value", std::ios::ate);
        }
        else if(gpio_status = 491){
            out.open("gpio491/value", std::ios::ate);
        }
        else if(gpio_status = 488){
            out.open("gpio488/value", std::ios::ate);
        }
    }
    else if(out.fail()){
        std::cerr << "Error!" << std::endl;
    }
    out.close();
}

void LED::On(){
    if(led_status = 1){
        std::cout << "1" << std::endl;
    }
}

void LED::Off(){
    if(led_status = 0){
        std::cout << "0" << std::endl;
    }
}
