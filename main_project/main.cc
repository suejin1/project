#include "includes/common.h"

using namespace std;

int main()
{
    logic logic;

    cout << "This is OBU Control Program!!!" << endl;
    cout << "Please Insert Number of You Want to Control!" << endl;
    cout << "1.LED Process" << endl;
    cin >> g_insert_num;

    switch(g_insert_num);
    {
        case(g_insert_num == 1) :
            cout << "You Choose LED Controller!" << endl;
            logic.led_proc((OPCODE_LED)(g_insert_num -1));
            break;
        
    }

}

