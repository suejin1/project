#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int value;
extern int temp_sensor;

class temperature{
    public:
    
    void temp_logic();
    void temp_zone0();
    void temp_zone1();
};

void temp_zone0()
{
    ifstream in("/sys/class/thermal/thermal_zone0/temp");

    if (in.is_open()){
        in >> value;
        std::cout << "temp_zone0 temperature is :: " << value << std::endl;
    }
    else {
        std::cout << "Error!!!" << std::endl;
    }
    in.close();

}

void temp_zone1()
{
    ifstream in("/sys/class/thermal/thermal_zone1/temp");

    if (in.is_open()){
        in >> value;
        std::cout << "temp_zone1 temperature is :: " << value << std::endl;
    }
    else {
        std::cout << "Error!!!" << std::endl;
    }
    in.close();
}

void temp_logic(){
    if(temp_sensor == 1){
        temp_zone0();
    }
    else if(temp_sensor == 2){
        temp_zone1();
    }
}