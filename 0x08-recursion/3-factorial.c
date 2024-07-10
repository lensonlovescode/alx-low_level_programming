#include "main.h"
/**
 * factorial - returns the factorial of an integer
 * @n: the integer to be used
 * Return: returns the factorial on success, -1 for -ve numbers
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
