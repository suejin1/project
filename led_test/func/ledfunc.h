#include <iostream>
#include <fstream>
#include <string>

#define SYS_GPIO_DIR ("/sys/class/gpio")

using namespace std;

int gpio_num, led_num;
std::string s;


class led{
    public:

    static void led_status();
    static void out();
};

enum GPIO{
    enum_gpio487 = 1,
    enum_gpio488,
    enum_gpio489,
    enum_gpio490,
    enum_gpio491
};

void out(){

    if(gpio_num = enum_gpio487){
        std::ofstream ofs("/gpio487/value", std::ios::ate);
    }
    else if(gpio_num = enum_gpio488){
        std::ofstream ofs("/gpio488/value", std::ios::ate);
    }
    else if(gpio_num = enum_gpio489){
        std::ofstream ofs("/gpio489/value", std::ios::ate);
    }
    else if(gpio_num = enum_gpio490){
        std::ofstream ofs("/gpio490/value", std::ios::ate);
    }
    else if(gpio_num = enum_gpio491){
        std::ofstream ofs("/gpio491/value", std::ios::ate);
    }
    else if(gpio_num = 6){
        cout << "Exit The Program!!" << endl;
    }
    if(ofs.fail())
    {
        std::cerr << "Error!" << std::endl;
    }

    ofs.close();
}

void led_status(){

    if(ofs.is_open){
        if(led_num = 1){
            ofs << "1" << std::endl;
        }
    }
        else if(led_num = 0){
            ofs << "0" << std::endl;
    }

    if(ofs.fail())
    {
        std::cerr << "Error!" << std::endl;
    }

    ofs.close();
}
