#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - this executes the function passed for each
 * element of the array
 * @array: this is the pointer to the array
 * @size: this is the number of elements of the array
 * @action: this is the pointer to the function being executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
