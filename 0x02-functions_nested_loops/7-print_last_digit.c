#include "main.h"
/**
 * print_last_digit - this will check for the value of the last digit
 *
 * @a: this is the parameter to be evaluated
 *
 * Return: this will return the last digit
 */
int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;

	_putchar(k + '0');
	return (k);
}
