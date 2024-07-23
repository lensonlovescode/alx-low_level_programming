#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - this searches for an integer
 * @array: this is the array tobe searched
 * @size: this is the size of the array
 * @cmp: this is the external function to checkthe integer
 * Return: it will return a pointer to the index
 * where the return value is not zero
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
