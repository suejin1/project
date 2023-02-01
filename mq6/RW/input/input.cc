#include <iostream>
#include "includes/R_data.h"
#include "includes/R.h"
#include "includes/input.h"

using namespace std;



//정수값 2개 입력 받기
void InputValue(LED_DATA *ap_data)
{
    printf("input data (Starttime Endtime Lednum Pattern) : " );
    scanf("%d %d %d %d", &ap_data->a, &ap_data->b, &ap_data->c, &ap_data->d);
}

//연산자 입력 받기 -> ShowResult 로 연결
void InputOp(LED_DATA *ap_data)
{
    printf("(1: LED / 2: TEMP / 3: GPS)\n");
    printf("choose(ex 1): ");
    scanf("%d", &ap_data->op);
}

