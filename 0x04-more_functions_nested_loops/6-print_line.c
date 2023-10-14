#include "main.h"

/**
 * print_line - this will print the line
 * @n: this is the number of times the line should be printed
 * Return: this will return 0
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
