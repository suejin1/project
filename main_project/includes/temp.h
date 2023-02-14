#include <iostream>
#include <fstream>

float value = value / 1000;

using namespace std;

enum TEMP_ZONE{
    TEMP_ZONE_0 = 1,
    TEMP_ZONE_1
};

class temperature{
    public:

    temp();
    ifstream tempout[3];

    void temp_out();
    void temp_zone0();
    void temp_zone1();
};

temperature::temp(){
    tempout[TEMP_ZONE_0].in("/sys/class/thermal/theramal_zone0/temp");
    tempout[TEMP_ZONE_1].in("/sys/class/thermal/theramal_zone1/temp");
}


void temperature::temp_zone0(){
    if(in.is_open()){
        tempout[type] >> value;
        // in >> value;
        std::cout << "temp_zone0 temperature is :: " << value << "℃" << std::endl;
    }
    else{
        std::cout << "Error!!!" << std::endl;
    }
    in.close();
}

void temperature::temp_zone1(){
    ifstream in("/sys/class/thermal/theramal_zone1/temp");

    if(in.is_open()){
        tempout[type] >> value;
        // in >> value;
        std::cout << "temp_zone1 temperature is :: " << value << "℃" << std::endl;
    }
    else{
        std::cout << "Error!!!" << std::endl;
    }
    in.close();
}