#include "logic.h"

void logic::temp_proc(){

    temperature temp;

    cout << "Temperature Sensor Management Program" << endl;
    cout << "Please Select Temperature Sensor" << endl;
    cout << " 1. temp_zone0    2. temp_zone1" << endl;
    cin >> temp_init;
    
    if(temp_init == 1){
        temp.temp_zone0();
    }

    else if(temp_init == 2){
        temp.temp_zone1();
    }
}

void logic::led_proc(){

}

void logic::gps_proc(){

}