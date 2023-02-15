#ifndef _TEMPFUNC_H_
#define _TEMPFUNC_H_

#include "common.h"

using namespace std;

extern int temp_sensor;

enum TEMP_TYPE
{
    TEMP_TYPE_0 = 0,
    TEMP_TYPE_1
};

class temperature
{
    public:

    void temp();
    ifstream in[3];
    
    float value = value / 1000;
    
    void Temp_Out();
    void Temp_Zone0(TEMP_TYPE type);
    void Temp_Zone1(TEMP_TYPE type);
};

#endif
