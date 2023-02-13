#include "func/logic.h" 

using namespace std;

int control_init, led_num;

int main(){

    led led;
    temp temp;
    gps gps;

    cout << "This is LED Controller" << endl;
    cout << "Please Choose What Led You Want to Control" << endl;
    cout << "1.LED Control    2.Temperature Sensor Control    3.GPS Sensor Control" << endl;
    cin >> control_init;
    logic.Out();
    // cout << "Select Your LED Status Insert ( 0 is off, 1 is on)" << endl;
    // cin >> led_num;
    // led.Out();

    return 0;
}

