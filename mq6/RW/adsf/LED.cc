//Calc.c
#include <iostream>
#include "includes/R_data.h"
#include "includes/R.h"
#include "includes/input.h"

//Starttime Endtime Lednum Pattern

class LED{
    public:



};

int LED(LED_DATA a_data)
{
    if( a_data.a == 1 )
    {
        printf("Start Time is: %d \n", a_data.a );
        if(a_data.b == 1)
        {
            printf("End Time is: %d \n", a_data.a );
            #pragma region LED 1
            if(a_data.c==1)
            {
                printf("LED NUM is: 1 \n");
                if(a_data.d==1)
                {
                    printf("Pattern 1 Start \n");
                }
                else if(a_data.d==2)
                {
                    printf("Pattern 2 Start \n");
                }
                else if(a_data.d==3)
                {
                    printf("Pattern 3 Start \n");
                }
                else{printf("Pattern Error \n");}
            }
            #pragma endregion
            #pragma region LED 2
            else if(a_data.c==2)
            {
                printf("LED NUM is: 2 \n");
                if(a_data.d==1)
                {
                    printf("Pattern 1 Start \n");
                }
                else if(a_data.d==2)
                {
                    printf("Pattern 2 Start \n");
                }
                else if(a_data.d==3)
                {
                    printf("Pattern 3 Start \n");
                }
                else{printf("Pattern Error \n");}
            }
            #pragma endregion
            #pragma region LED 3
            else if(a_data.c==3)
            {
                printf("LED NUM is: 2 \n");
                if(a_data.d==1)
                {
                    printf("Pattern 1 Start \n");
                }
                else if(a_data.d==2)
                {
                    printf("Pattern 2 Start \n");
                }
                else if(a_data.d==3)
                {
                    printf("Pattern 3 Start \n");
                }
                else{printf("Pattern Error \n");}
            }
            #pragma endregion
            #pragma region LED 4
            else if(a_data.c==4)
            {
                printf("LED NUM is: 2 \n");
                if(a_data.d==1)
                {
                    printf("Pattern 1 Start \n");
                }
                else if(a_data.d==2)
                {
                    printf("Pattern 2 Start \n");
                }
                else if(a_data.d==3)
                {
                    printf("Pattern 3 Start \n");
                }
                else{printf("Pattern Error \n");}
            }
            #pragma endregion
            #pragma region LED 5
            else if(a_data.c==5)
            {
                printf("LED NUM is: 2 \n");
                if(a_data.d==1)
                {
                    printf("Pattern 1 Start \n");
                }
                else if(a_data.d==2)
                {
                    printf("Pattern 2 Start \n");
                }
                else if(a_data.d==3)
                {
                    printf("Pattern 3 Start \n");
                }
                else{printf("Pattern Error \n");}
            }
            #pragma endregion


            else{("Led Num Error \n");}
        }
        else{printf("End Time Error \n");}
    }

    else{printf("Start Time Error \n");}

}
