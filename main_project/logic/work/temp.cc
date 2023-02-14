#include "temp.h"

int temperature::temp(){
    tempout[TEMP_TYPE_0].in("/sys/class/thermal/theramal_zone0/temp");
    tempout[TEMP_TYPE_1].in("/sys/class/thermal/theramal_zone1/temp");
}

void temperature::temp_out(){

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