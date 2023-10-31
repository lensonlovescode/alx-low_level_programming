#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - this will create the array of chaacters
 * @size: this is the number of bytes to be allocated
 * @c: this is the character to be initialized in the array
 * Return: this will return null if the size is zero or if the code fails
 * and a pointer to the array if success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size != 0)
	{
		ptr = (char *)malloc(size * sizeof(char));

		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
	}
		return (ptr);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
}
