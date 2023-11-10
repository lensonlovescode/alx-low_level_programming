#include "variadic_functions.h"

void printDigits(int number) {


	int temp = number;
	int digits = 0;
	int i;
	int j;
	int divisor;
	int digit;

    if (number < 0) {
        putchar('-');
        number = -number;
    }

    if (number == 0) {
        putchar('0');
        return;
    }

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    for (i = digits - 1; i >= 0; i--) {
        divisor = 1;
        for (j = 0; j < i; j++) {
            divisor *= 10;
        }
        digit = (number / divisor) % 10;
        putchar('0' + digit);
    }
}

