#include "main.h"
/**
 * array_range - this creates an array of integers
 * @min: this is the first integer
 * @max: this is the second integer
 * Return: this will return the pointer to the array if success and
 * null if failure
 *
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	int size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
