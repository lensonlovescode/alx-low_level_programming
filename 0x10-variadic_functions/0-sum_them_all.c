#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - this sums up the given arguments
 * @n: this is the numbe of arguments to be summed
 * Return: this will return the sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	int sum;
	va_list args;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		sum += x;
	}
	va_end(args);

	return (sum);
}
