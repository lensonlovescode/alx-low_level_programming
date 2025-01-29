#include "search_algos.h"
/**
 * linear_search - performs a linear search on an array
 * @array: the array to be searhe through
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: returns the index or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);

}
