#include "header.h"

void printtime()
{
    c_data data;
    stIpcMsg msg;

    data.timer = time(NULL);
    data.t = localtime(&data.timer);

    printf("현재 유닉스 타임 (Unix Time): %lx 초\n\n", data.timer);
    printf("현재 시 분 초: %d %d %d\n", data.t->tm_hour, data.t->tm_min, data.t->tm_sec);

    printf("LED : 1 LedNum StartTime EndTime patter\n     (1 1~5 X X 1~3) \n");
    printf("TEMP : 2 StartTime EndTime Intervla\n      (2 X X free 0) \n");
    printf("GPS : 3 StartTime EndTime Intervla\n     (3 X X free 0) \n"); 
}