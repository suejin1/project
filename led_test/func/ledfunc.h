#include <iostream>
#include <fstream>
#include <string>

using namespace std;

extern int gpio_num,led_num;

std::ofstream out("/sys/class/gpio");

class led{
public:
int led_num = 0;
int gpio_num = 0;

void On();
void Off();
void Out();


};

enum GPIO{
    enum_gpio487 = 1,
    enum_gpio488,
    enum_gpio489,
    enum_gpio490,
    enum_gpio491
};

void led::On(){
    if(out.is_open()){
        ofstream out("/value", std::ios::ate);
        out << "1";
        out.close();
    }
}

void led::Off(){
    if(out.is_open()){
        ofstream out("/value", std::ios::ate);
        out << "0";
        out.close();
    }
}

void led::Out(){
    if(gpio_num = enum_gpio487){
        if(led_num = 1){
            std::ofstream out("gpio487");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio487");
            led::Off();
        }
    }
    else if(gpio_num = enum_gpio488){
        if(led_num = 1){
            std::ofstream out("/gpio488");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio488");
            led::Off();
        }
    }
    else if(gpio_num = enum_gpio489){
       if(led_num = 1){
            std::ofstream out("/gpio489");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio489");
            led::Off();
        }
    }
    else if(gpio_num = enum_gpio490){
        if(led_num = 1){
            std::ofstream out("/gpio490");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio490");
            led::Off();
        }
    }
    else if(gpio_num = enum_gpio491){
        if(led_num = 1){
            std::ofstream out("/gpio491");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio491");
            led::Off();
        }
    }
    else if(gpio_num = 6){
        cout << "Exit The Program!!" << endl;
    }

    if(out.fail())
    {
        std::cerr << "Error!" << std::endl;
    }

    out.close();

}
