#include "logic.h"

using namespace std;

enum opcode{
    opcode_led = 1,
    opcode_temp,
    opcode_gps
}operationcode;

int main(){

    logic logic;
    cout << "Welcome To the OBU Control Program !!! " << endl;
    cout << "Please insert num to choose Control Sysytem " << endl;
    cin >> opcode;
    
    switch(operationcode)
    {
    case opcode_led:
        cout << "This is LED Control Program" << endl;
        logic.led_proc();
    break;

    case opcode_temp:
    cout << "This is Temperature Control Program" << endl;
        logic.temp_proc();
    break;
    
    case opcode_gps:
    cout << "This is GPS Control Program" << endl;
        logic.gps_proc();
    break;
    }

    return 0;

}