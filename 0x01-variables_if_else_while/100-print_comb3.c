#include <stdio.h>

/**
 * main - this is just the main function
 *
 * Return: this returns 0
 *
 * putchar - this prints out all the number combinations
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
		if (i != j)
		{
			putchar('0' + i);
			putchar('0' + j);
		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
