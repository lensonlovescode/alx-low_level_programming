#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: this will return 0
 *
 */
int main(void)
{
	int p;
	int q;
	int r;

	for (p = 0; p < 10; p++)
	{
	for (q = p; q < 10; q++)
	{
	for (r = p; r < 10; r++)
	{
		if (p != q)
		{
		if (p != r)
		{
		if (q != r)
		{
			printf("%d\n", p);
			printf("%d\n", q);
			printf("%d\n", r);
			putchar(',');
			putchar(' ');
			putchar('\n');
		}
		}
		}
	}
	}
	}
	return (0);
}
