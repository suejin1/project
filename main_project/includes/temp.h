#include <iostream>
#include <fstream>

float value = value / 1000;

using namespace std;

enum TEMP_TYPE{
    TEMP_TYPE_0 = 1,
    TEMP_TYPE_1
};

class temperature{
    public:

    int temp();
    ifstream tempout[3];

    void temp_out();
    void temp_zone0();
    void temp_zone1();
};
