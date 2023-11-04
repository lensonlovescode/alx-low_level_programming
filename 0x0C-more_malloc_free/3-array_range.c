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
	int *ptr;
	int arr[12];
	
	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

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

	for (i = 0; i <= max; i++)
	{
		ptr[i] = arr[i];
	}
	return (ptr);
}
