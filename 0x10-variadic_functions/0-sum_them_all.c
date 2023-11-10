#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *
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
