#include <iostream>
#include <fstream>
#include <string>

int value;

using namespace std;

class temperature{
    public:
    
    void temp_zone0();
    void temp_zone1();
};

void temp_zone0()
{
    ifstream ifs("/sys/class/thermal/thermal_zone0/temp");

    ifs >> value;
}

void temp_zone1()
{
    ifstream ifs("/sys/class/thermal/thermal_zone1/temp");

    ifs >> value;
}