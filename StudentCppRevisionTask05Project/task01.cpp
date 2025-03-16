#include "tasks.h"
#include <cmath>
using namespace std;


int task01(int hour1, int minute1, int second1, int hour2, int minute2, int second2) {
  
    if (hour1 < 0 || hour1 >= 24 || minute1 < 0 || minute1 >= 60 || second1 < 0 || second1 >= 60 ||
        hour2 < 0 || hour2 >= 24 || minute2 < 0 || minute2 >= 60 || second2 < 0 || second2 >= 60) {
        return -1;
    }

    
    int time1 = hour1 * 3600 + minute1 * 60 + second1;
    int time2 = hour2 * 3600 + minute2 * 60 + second2;

    return abs(time1 - time2); 
}