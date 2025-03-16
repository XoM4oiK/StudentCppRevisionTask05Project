#include "tasks.h"
#include <cmath>
using namespace std;



bool task02(int number) {
    if (number < 0 || number > 9999) {
        return false; 
    }

    int reversed = 0, original = number;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return original == reversed; 
}