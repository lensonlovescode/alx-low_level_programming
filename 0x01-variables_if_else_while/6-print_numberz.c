#include <stdio.h>
/**
 * main - this is  just the main function
 *
 * Return: this will return 0
 *
 * putchar - this prints out the individual letters
 *
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
