#include <fstream>
#include "logic.h"

extern int temp_sensor;

using namespace std;

void logic::temp_proc(){
    if(temp_sensor == 1){
        temp_zone0();
    }
    else if(temp_sensor == 2){
        temp_zone1();
    }

}

int temp_zone0(){
    ifstream in("/sys/class/thermal/thermal_zone0/temp");

    if (in.is_open()){
        
    }
}

int temp_zone1(){

}
