#include <iostream>
#include <fstream>

#define SYS_GPIO_DIR "/sys/class/gpio"

class LED{
    public:
    int port_num, i;
    char buff[256];
    FILE *fp;

    void Out();
    void On();
    void Off();
};

enum GPIO
{
    GPIO_487 = 487,
    GPIO_488,
    GPIO_489,
    GPIO_490,
    GPIO_491
};

GPIO value = "/value";

void LED::Out(){
    std::
    
}

void LED::On(){
    
}

void LED::Off(){
    std::ofstream out( GPIO_487 ("value"), std::ios::ate);
    if (out.is_open()){
        out << "0";
    }
}