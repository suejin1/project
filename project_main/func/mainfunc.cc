#include "common.h"

void main_ui_init()
{
    switch(init)
    {
        case UI_LED:
        led.Out();
        break;

        case UI_TEMP:
        temp.Temp_Out();
        break;
    }
}