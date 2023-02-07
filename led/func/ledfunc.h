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
    ofstream out("/value", std::ios::ate);
    if(out.is_open()){
        out << "1";
        out.close();
    }
}

void led::Off(){
    ofstream out("/value", std::ios::ate);
    if(out.is_open()){
        out << "0";
        out.close();
    }
}


void led::Out(){

    std::ofstream out("/sys/class/gpio");
    if(gpio_num = 1)
        if(led_num = 1){
            std::ofstream out("/gpio487");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio487");
            led::Off();
        }

    else if(gpio_num = 2)
        if(led_num = 1){
            std::ofstream out("/gpio488");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio488");
            led::Off();
        }

    else if(gpio_num = 3)
        if(led_num = 1){
            std::ofstream out("/gpio489");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio489");
            led::Off();
        }

    else if(gpio_num = 4)
        if(led_num = 1){
            std::ofstream out("/gpio490");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio490");
            led::Off();
        }
    
    else if(led_num = 5)
        if(led_num = 1){
            std::ofstream out("/gpio491");
            led::On();
        }
        else if(led_num = 0){
            std::ofstream out("/gpio491");
            led::Off();
        }

    if(out.fail())
    {
        std::cerr << "Error!" << std::endl;
    }

    out.close();

}
