#include "includes/interval.h"

using namespace std;

int start_time = 0, finish_time, interval_num;

int main(){
    interval interval;

    cout << "Welcome to Interval Timer !!!" << endl;
    cout << "Insert Start Time" << endl;
    cin >> start_time;
    cout << "Insert Finish Time" << endl;
    cin >> finish_time;
    cout << "Please Select Interval Of your Timer" << endl;
    cin >> interval_num;

    interval.timer();

    return 0;

}