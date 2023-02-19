#include "../includes/temp.h"
#include "../includes/interval.h"

void temperature::temp_logic(){
    interval interval;

    interval.timer
    
    if(temp_sensor == 1){
        temp_zone0();
    }
    else if(temp_sensor == 2){
        temp_zone1();
    }
}

void temperature::temp_zone0()
{
    ifstream in("/sys/class/thermal/thermal_zone0/temp");

    if (in.is_open()){
        in >> value;
        std::cout << "temp_zone0 temperature is :: " << value << "℃" << std::endl;
    }
    else {
        std::cout << "Error!!!" << std::endl;
    }
    in.close();

}

void temperature::temp_zone1()
{
    ifstream in("/sys/class/thermal/thermal_zone1/temp");

    if (in.is_open()){
        in >> value;
        std::cout << "temp_zone1 temperature is :: " << value << "℃" << std::endl;
    }
    else {
        std::cout << "Error!!!" << std::endl;
    }
    in.close();
}

