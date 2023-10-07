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
	char numbers[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(numbers[i]);
	}

	putchar('\n');

	return (0);
}
