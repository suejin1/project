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

void Out(){
    
}