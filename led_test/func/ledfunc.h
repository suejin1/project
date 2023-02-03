#include <iostream>
#include <fstream>
#include <string>

#define SYS_GPIO_DIR ("/sys/class/gpio")

using namespace std;

std::ofstream ofs(SYS_GPIO_DIR);

int gpio_num, led_num;

class led{
public:

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
        std::ofstream out("/gpio487/value", std::ios::ate);
        if(led_num = 1){
            out << "1";
        }
        else if(led_num = 0){
            out << "0";
        }
    }
    else if(gpio_num = enum_gpio488){
        std::ofstream out("/gpio488/value", std::ios::ate);
        if(led_num = 1){
            out << "1";
        }
        else if(led_num = 0){
            out << "0";
        }
    }
    else if(gpio_num = enum_gpio489){
        if(led_num = 1){
            std::ofstream out("/sys/class/gpio/gpio489/value", std::ios::ate);
            out << "1";
        }
        else if(led_num = 0){
            std::ofstream out("/sys/class/gpio/gpio489/value", std::ios::ate);
            out << "0";
        }
    }
    else if(gpio_num = enum_gpio490){
        std::ofstream out("/gpio490/value", std::ios::ate);
        if(led_num = 1){
            out << "1";
        }
        else if(led_num = 0){
            out << "0";
        }
    }
    else if(gpio_num = enum_gpio491){
        std::ofstream out("/gpio491/value", std::ios::ate);
        if(led_num = 1){
            out << "1";
        }
        else if(led_num = 0){
            out << "0";
        }
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
