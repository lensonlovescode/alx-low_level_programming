#include "variadic_functions.h"
void printString(const char *str) {
	int i;

    if (str != NULL) {
        for (i = 0; str[i] != '\0'; ++i) {
            putchar(str[i]);
        }
    } else {
        printf("(NULL pointer)\n");
    }
}

