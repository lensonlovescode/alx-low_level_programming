#include "main.h"

/**
 * more_numbers - this will print the 10 rows of characters
 *
 * Return: this will return 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
			_putchar(i + '0');
	}
		_putchar('\n');
	}
	_putchar('\n');

}
