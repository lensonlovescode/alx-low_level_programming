#include "main.h"
/**
 * swap_int - this swaps the values of two integers
 * @a: this is the first integer
 * @b: this is the second integer
 * Return: this returns 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
