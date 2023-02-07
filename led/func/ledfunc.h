#include <iostream>
#include <fstream>
#include <string>

using namespace std;

extern int gpio_num,led_num;

class led{

public:
int led_num = 0;
int gpio_num = 0;

void On();
void Off();
void Out();

};

void led::On(){
    ofstream out("/value.txt", std::ios::ate);
        out << "1" << endl;
        out.close();
}


void led::Off(){
    ofstream out("/value.txt", std::ios::ate);
        out << "0" << endl;
        out.close();

}


void led::Out(){

    enum GPIO{
        enum_gpio487 = 1,
        enum_gpio488,
        enum_gpio489,
        enum_gpio490,
        enum_gpio491
    };

    ofstream out;
    GPIO gpio;

    switch(gpio){
        case enum_gpio487:
        if(led_num = 1){
                std::ofstream out("/sys/class/gpio/gpio487/value");
                led::On();
            }
            else if(led_num = 0){
                std::ofstream out("/sys/class/gpio/gpio487/value");
                led::Off();
            }
        
        break;

        case enum_gpio488:
        if(led_num = 1){
                std::ofstream out("/sys/class/gpio/gpio488/value");
                led::On();
            }
            else if(led_num = 0){
                std::ofstream out("/sys/class/gpio/gpio488/value");
                led::Off();
            }

        break;

        case enum_gpio489:
        if(led_num = 1){
                std::ofstream out("/sys/class/gpio/gpio491/value");
                led::On();
            }
            else if(led_num = 0){
                std::ofstream out("/sys/class/gpio/gpio491/value");
                led::Off();
            }

        break;

        case enum_gpio490:
        if(led_num = 1){
                std::ofstream out("/sys/class/gpio/gpio490/value");
                led::On();
            }
            else if(led_num = 0){
                std::ofstream out("/sys/class/gpio/gpio490/value");
                led::Off();
            }

        break;

        case enum_gpio491:
        if(led_num = 1){
                std::ofstream out("/sys/class/gpio/gpio491/value");
                led::On();
            }
            else if(led_num = 0){
                std::ofstream out("/sys/class/gpio/gpio491/value");
                led::Off();
            }

    }
    // if(out.is_open())
    // {
    //     if(gpio_num = 1){
            
    //     }

    //     else if(gpio_num = 2){
    //         if(led_num = 1){
    //             std::ofstream out("/sys/class/gpio/gpio490");
    //             led::On();
    //         }
    //         else if(led_num = 0){
    //             std::ofstream out("/sys/class/gpio/gpio490");
    //             led::Off();
    //         }
    //     }

    //     else if(gpio_num = 3){
    //         if(led_num = 1){
    //             std::ofstream out("/sys/class/gpio/gpio489");
    //             led::On();
    //         }
    //         else if(led_num = 0){
    //             std::ofstream out("/sys/class/gpio/gpio489");
    //             led::Off();
    //         }
    //     }

    //     else if(gpio_num = 4){
    //         if(led_num = 1){
    //             std::ofstream out("/sys/class/gpio/gpio488");
    //             led::On();
    //         }
    //         else if(led_num = 0){
    //             std::ofstream out("/sys/class/gpio/gpio488");
    //             led::Off();
    //         }
    //     }
    
    //     else if(led_num = 5){
    //         if(led_num = 1){
    //             std::ofstream out("/sys/class/gpio/gpio487");
    //             led::On();
    //         }
    //         else if(led_num = 0){
    //             std::ofstream out("/sys/class/gpio/gpio487");
    //             led::Off();
    //         }
    //     }
    // }

    if(out.fail())
    {
        std::cerr << "Error!" << std::endl;
    }

    out.close();
    
}
