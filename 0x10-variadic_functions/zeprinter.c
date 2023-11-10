#include "variadic_functions.h"

int countDigits(int number) {
    int count = 0;

    if (number == 0) {
        return 1;
    }

    if (number < 0) {
        count++;
        number = -number;
    }

    while (number > 0) {
        number /= 10;
        count++;
    }

    return count;
}
