#include "tasks.h"
#include <cmath>
using namespace std;


int task03(int v, int t) {
    if (t < 0) {
        return -1; 
    }

    const int MKAD_LENGTH = 56;
    int distance = (v * t) % MKAD_LENGTH;

    if (distance < 0) {
        distance += MKAD_LENGTH;
    }

    return distance;
}