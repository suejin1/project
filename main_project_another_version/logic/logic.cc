#include "logic.h"

void logic::Out(){
    if(control_init == 1){
        logic::led_out();
        // led::On((LED_TYPE)(gpio_num -1));
    }

    else if(control_init == 2){
        logic::temp_out();
        // led::Off((LED_TYPE)(gpio_num -1));
    }

    else if(control_init == 3){
        logic::gps_out();
    }
    
}




// int led::led_init()
// {
    
// }