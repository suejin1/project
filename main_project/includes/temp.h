#include <iostream>
#include <fstream>

extern int temp_sensor;
float value = value / 1000;

using namespace std;

class temperature{
    public:

    void temp_zone0();
    void temp_zone1();
};

void temp_zone0(){
    ifstream in("/sys/class/thermal/theramal_zone0/temp");

    if(in.is_open()){
        in >> value;
        std::cout << "temp_zone0 temperature is :: " << value << "℃" << std::endl;
    }
    else{
        std::cout << "Error!!!" << std::endl;
    }
    in.close();
}

void temp_zone1(){
    ifstream in("/sys/class/thermal/theramal_zone1/temp");

    if(in.is_open()){
        in >> value;
        std::cout << "temp_zone1 temperature is :: " << value << "℃" << std::endl;
    }
    else{
        std::cout << "Error!!!" << std::endl;
    }
    in.close();
}