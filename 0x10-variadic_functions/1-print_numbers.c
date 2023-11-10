#include "variadic_functions.h"
/**
 * printDigits - this prints the numbers
 * @number: this is the numbe to be printed
 * Return: this will return void
 */
void printDigits(int number)
{
	int temp = number;
	int digits = 0;
	int i;
	int j;
	int divisor;
	int digit;

	if (number < 0)
	{
		putchar('-');
		number = -number;
	}

	if (number == 0)
	{
		putchar('0');
		return;
	}
	while (temp > 0)
	{
		temp /= 10;
		digits++;
	}

	for (i = digits - 1; i >= 0; i--)
	{
		divisor = 1;
		for (j = 0; j < i; j++)
		{
			divisor *= 10;
		}
		digit = (number / divisor) % 10;
		putchar('0' + digit);
	}
}
/**
 * printString - this prints a string
 * @str: this is the pointer to the string
 * Return: this is void
 */
void printString(const char *str)
{
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; ++i)
		{
			putchar(str[i]);
		}
	}
	else
	{
		printf("(NULL pointer)\n");
	}
}
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
				num = va_arg(args, int);
				printDigits(num);
			}
		}
		putchar('\n');
	}
	else
		printString("");
}
