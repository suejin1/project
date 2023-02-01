//Calc.c
#include <iostream>
#include "includes/R_data.h"
#include "includes/R.h"
#include "includes/input.h"

//Starttime Endtime Lednum Pattern

class TEMP{
    public:



};

int TEMP(LED_DATA a_data)
{
    if( a_data.a == 1 )
    {
        printf("Start Time is: %d \n", a_data.a );
        if(a_data.b == 1)
        {
            printf("End Time is: %d \n", a_data.a );

            if(a_data.c==1)
            {
                printf("Interval is: 1 \n");
                if(a_data.d==1)
                {
                    printf("TEMP Start \n");
                }

            }

            else{("Interval Error \n");}
        }
        else{printf("End Time Error \n");}
    }

    else{printf("Start Time Error \n");}

}
