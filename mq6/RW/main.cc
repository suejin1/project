#include <iostream>
#include "includes/R_data.h"
#include "includes/R.h"
#include "includes/input.h"

//연산 -> 결과 출력
// InputOp 에서 받은 op 값으로 각 연산 호출
void ShowResult(LED_DATA a_data)
{
    // if(a_data.op==LED && a_data.op==TEMP && a_data.op==GPS )
    if(a_data.op>=1 && a_data.op<=3 )
    {
        int result;

        if(a_data.op==1) result=LED(a_data);
        else if(a_data.op==2) result=Minus(a_data);
        else result=GPS(a_data);

        printf("End \n"); //결과 출력
    }
    else{printf("no operator \n");} // 값이 1~4 사이가 아니면 나옴
}

int main()
{
    // char select='y';  //계산 반복 대기
    int run=1;
    LED_DATA data;

    // printf("run more?: \n");
    // rewind(stdin);
    // scanf("%c", &select);    
    while(run==1)
    {     
        InputOp(&data);   
        InputValue(&data);
        //InputOp(&data);
        ShowResult(data);

        printf("run more?(0:stop / 1: run): \n");
        //rewind(stdin);
        scanf("%d", &run);
        if(run==0) break;
    }
    return 0;
}