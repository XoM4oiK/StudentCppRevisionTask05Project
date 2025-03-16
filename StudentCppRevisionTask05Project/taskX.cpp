#include "tasks.h"
#include <cmath>
using namespace std;

int taskX(int h, int a, int b) {
    if (h <= 0 || a <= b || b < 0) {
        return 0; 
    }

    
    int effectiveClimb = a - b;
    int days = (h - b + effectiveClimb - 1) / effectiveClimb; 

    return days;
}
