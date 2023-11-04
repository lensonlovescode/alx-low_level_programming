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
	
	arr = malloc((max - min + 1) * sizeof(int));

	if (min < max)
	{
		for (i = min; i <= max; i++)
		{
			arr[i] = min;
			min++;
		}
		arr[max] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (arr);
}
