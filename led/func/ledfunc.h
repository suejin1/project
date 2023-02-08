#include <iostream>
#include <fstream>
#include <string>

using namespace std;

extern int gpio_num,led_num;

ofstream get_gpio_pin;



class led{

public:



ofstream fivegout[5]


void On();
void Off();
void Out();
led();
};

led::led()
{
fivegout[0]
}

led::led(int gpio_num )
{
fivegout[0]
}

void led::On(){
    ofstream get_gpio_pin;
    int value = 1;
    get_gpio_pin << value;
}


void led::Off(){
    ofstream get_gpio_pin;
    int value = 0;
    get_gpio_pin << value;
}


void led::Out(){

    if(gpio_num == 1){
        if(led_num = 1){
            std::ofstream out("/sys/class/gpio/gpio487/value", std::ios::ate);
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/sys/class/gpio/gpio487/value", std::ios::ate);
            led::On();
        }
    }

    if(gpio_num == 2){
        if(led_num = 1){
            std::ofstream out("/sys/class/gpio/gpio488/value", std::ios::ate);
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/sys/class/gpio/gpio488/value", std::ios::ate);
            led::Off();
        }
    }

    if(gpio_num == 3){
        if(led_num = 1){
            std::ofstream out("/sys/class/gpio/gpio489/value", std::ios::ate);
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/sys/class/gpio/gpio489/value", std::ios::ate);
            led::Off();
        }
    }

    if(gpio_num == 4){
        if(led_num = 1){
            std::ofstream out("/sys/class/gpio/gpio490/value", std::ios::ate);
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/sys/class/gpio/gpio490/value", std::ios::ate);
            led::Off();
        }
    }

    if(gpio_num == 5){
        if(led_num = 1){
            std::ofstream out("/sys/class/gpio/gpio491/value", std::ios::ate);
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/sys/class/gpio/gpio491/value", std::ios::ate);
            led::Off();
        }
    }

    if(get_gpio_pin.fail())
    {
        std::cerr << "Error!" << std::endl;
    }

    get_gpio_pin.close();
    
}
