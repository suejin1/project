#include "func/temp.h"

using namespace std;

int temp_sensor;

int main(){
    
    temperature temp;
    
    cout << "Temperature Sensor Management Program" << endl;
    cout << "Please Select Temperature Sensor" << endl;
    cout << " 1. temp_zone0    2. temp_zone1" << endl;
    cin >> temp_sensor;
    temp.temp_logic();

    return 0;
}
