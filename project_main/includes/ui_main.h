#ifndef _UI_MAIN_H_
#define _UI_MAIN_H_

#include "tempfunc.h"
#include "ledfunc.h"

enum class UI_INSERT : int;

enum class UI_INSERT : int
{
    UI_LED = 0,
    UI_TEMP,
    UI_GPS
};


class UI_MAIN
{
    public:
    int insert;

    UI_MAIN(){};
    void main_ui_init();
};

#endif