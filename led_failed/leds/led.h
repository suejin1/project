#include "fiveg_led.h"
#include "pwr_led.h"
#include "gnss_led.h"
#include "v2x_led.h"
#include "wave_led.h"

using namespace std;

extern int num,g_num;

class led_logic{

public:

void logic();
};

void logic(){

    fiveg_led fiveg_led;
    gnss_led gnss_led;
    pwr_led pwr_led;
    v2x_led v2x_led;
    wave_led wave_led;

    if(num == 1){
        std::cout << "Power_LED" << endl;
        std::cout << "Light Status (0 or 1)" << endl;
        cin >> g_num;
        if(g_num == 1){
            pwr_led.On();
        }
        else{
            pwr_led.Off();
        }
    }
    else if(num == 2){
        std::cout << "5G_LED" << endl;
        std::cout << "Light Status (0 or 1)" << endl;
        cin >> g_num;
        if(g_num == 1){
            fiveg_led.On();
        }
        else{
            fiveg_led.Off();
        }
    }
    else if(num == 3){
        std::cout << "C-V2X_LED" << endl;
        std::cout << "Light Status (0 or 1)" << endl;
        cin >> g_num;
        if(g_num == 1){
            v2x_led.On();
        }
        else{
            v2x_led.Off();
        }
    }
    else if(num == 4){
        std::cout << "WAVE_LED" << endl;
        std::cout << "Light Status (0 or 1)" << endl;
        cin >> g_num;
        if(g_num == 1){
            wave_led.On();
        }
        else{
            wave_led.Off();
        }
    }
    else if(num == 5){
        std::cout << "GNSS_LED" << endl;
        std::cout << "Light Status (0 or 1)" << endl;
        cin >> g_num;
        if(g_num == 1){
            gnss_led.On();
        }
        else{
            gnss_led.Off();
        }
    }
    else{
        std::cout << "Invalid Command !!!" << endl;
    }

}