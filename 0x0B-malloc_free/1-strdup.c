#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - this  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: this is the string to be duplicated
 * Return: this will return the pointer to the string in the
 *newly allocated memory
 * and null if the string points to null or if memory is insuficient
 */
char *_strdup(const char *str)
{
	char *ptr;
	int i;
	int length = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (str != NULL)
	{
		ptr = (char *)malloc((length + 1) * sizeof(char));
		for (i = 0; i < length; i++)
		{
			ptr[i] = str[i];
			ptr[length] = '\0';
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return (ptr);
	free(ptr);
}
