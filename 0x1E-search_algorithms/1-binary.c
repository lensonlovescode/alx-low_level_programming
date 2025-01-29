#include "search_algos.h"
/**
 * binary_search - searches an array: binary search
 * @array: the array to be searched through
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the value or -1 if unsuccessful
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%lu", i);
			else
				printf("%lu, ", i);
		}
		printf("\n");
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (array[mid]);
	}
	return (-1);
}
