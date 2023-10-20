#include "main.h"
/**
 * print_diagonal - this prints the diagonal line
 * @n: this is the number of times the character \ should be printed
 * Return: this will return 0
 */
void print_diagonal(int n)
{

	int m;
	int p;

	_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (p = 0; p < 10; p++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
