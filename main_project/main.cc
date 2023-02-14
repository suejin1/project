#include "./logic/logic.h"

using namespace std;

int opcode_num;

int main(){

    logic logic;
    cout << "Welcome To the OBU Control Program !!! " << endl;
    cout << "Please insert num to choose Control Sysytem " << endl;
    cout << "1.LED Control    2.Temperature Sensor Control    3.GPS Sensor Control" << endl;
    cin >> opcode_num;

    switch(opcode_num)
    {
    case OPCODE_LED:
        cout << "This is LED Control Program" << endl;
        logic::led_proc(OPCODE_TYPE(gpio_num -1));
    break;

    case OPCODE_TEMP:
    cout << "This is Temperature Control Program" << endl;
        logic::temp_proc(OPCODE_TYPE type());
    break;
    
    case OPCODE_GPS:
    cout << "This is GPS Control Program" << endl;
        logic::gps_proc(OPCODE_TYPE type);
    break;
    }

    return 0;

}