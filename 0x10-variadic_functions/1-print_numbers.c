#include "variadic_functions.h"
/**
 * print_numbers - prints numbers & new line at the end
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(list, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(list);
}
