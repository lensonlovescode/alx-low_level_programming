#include "variadic_functions.h"
/**
 * print_numbers - thiss prints the numbers
 * @separator: this is the separator
 * @n: this is the numbe of integers to be printed out
 * Return: this will return void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
		num = va_arg(args, int);
		printDigits(num);
		printString(separator);
		}
		else
		{
			num = va_arg(args,int);
			printDigits(num);
		}
	}
	putchar('\n');
	}
}
