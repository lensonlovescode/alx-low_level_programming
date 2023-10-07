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

	for (i = 0; i < 8; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(' ');
		}
	}
	return (0);
}
