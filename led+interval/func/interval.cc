#include "../includes/interval.h"

extern int start_time, finish_time;

using namespace std;

void interval::timer() {
    while (true) {
        displayClock();
        sleep(1);
        seconds++;
        if (seconds == 60) {
            minutes++;
            if (minutes == 60) {
                hours++;
                minutes = 0;
            }
            seconds = 0;
        }
    }
}

void interval::displayClock() {
    cout <<"| " <<setfill('0') <<setw(2) <<hours <<" hrs | ";
    cout <<setfill('0') <<setw(2) <<minutes <<" min | ";
    cout <<setfill('0') <<setw(2) <<seconds <<" sec |" <<endl;

}

// // void interval::timer(){
// //     if(start_time > 0){
// //         clock_t start = clock();
// //         clock_t end = clock();
// //         while(true){
// //             end = clock();

// //             if (double(end - start) / CLOCKS_PER_SEC == start_time) {
// //                 break;
// //             }
// //         }
// //     }

// //     else if(start_time < 0){
// //         cout << "Error!!!" << endl;
// //     }
// // }