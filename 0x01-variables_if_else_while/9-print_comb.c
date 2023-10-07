#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: this returns 0
 *
 * putchar - prints the numbers to the console
 */
int main(void)
{
	int i;
	int number = 9;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		putchar(number + '0');
	}

	return (0);
}
