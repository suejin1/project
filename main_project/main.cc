#include "includes/common.h"
#include "logic/logic.h"

using namespace std;
using std::thread;

void func_main_ui(){

    logic logic;
    cout << "Welcome To the OBU Control Program !!! " << endl;
    cout << "Please insert num to choose Control Sysytem " << endl;
    cout << "1.LED Control    2.Temperature Sensor Control    3.GPS Sensor Control" << endl;
    cin >> g_opcode_num;
    
}

void func_led(){
    switch(g_opcode_num)
    {
        case OPCODE_LED:
        cout << "This is LED Control Program" << endl;
        logic::led_proc((OPCODE_TYPE)(g_gpio_num -1));
    break;
    }
}

void func_temp(){

    switch(g_opcode_num)
    {
        case OPCODE_TEMP:
        cout << "This is Temperature Control Program" << endl;
        logic::temp_proc((OPCODE_TYPE)(g_temp_num -1));
    break;
    }
}

void func_gps(){

    switch(g_opcode_num)
    {
        case OPCODE_GPS:
        cout << "This is GPS Control Program" << endl;
    break;
    }
}

int main(){

    thread t1(func_main_ui);
    thread t2(func_led);
    thread t3(func_temp);
    thread t4(func_gps);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

}

