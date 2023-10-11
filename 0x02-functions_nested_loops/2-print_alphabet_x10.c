#include "main.h"
/**
 * print_alphabet_x10 - this will print the 10 rows of the alphabets
 *
 * Return: this will return 0
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 10; j < 10; j++)
	{
	for (i = 'a' ; i < 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
