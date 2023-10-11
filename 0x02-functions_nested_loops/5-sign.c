#include "main.h"
/**
 * print_sign - this checkes for the sign of the number
 *
 * @n: this is the parameter to ber evaluated
 *
 * Return: this is always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
