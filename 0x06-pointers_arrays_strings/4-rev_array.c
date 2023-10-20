#include "main.h"
/**
 * reverse_array - this reverses the contents of the array of integers
 * @a: this is the array to be reversed
 * @n: this is number of elements of the array
 * Return: this will return the reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int ch;

	for (i = 0; i < n / 2; i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
	}
	return (a);
}
