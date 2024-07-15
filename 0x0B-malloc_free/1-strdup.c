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
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	if(str != NULL)
	{
		ptr = (char *)malloc((length * sizeof(char)) + 1);
		for (i = 0; i < length; i++)
		{
			ptr[i] = str[i];
		}
		ptr[length] = '\0';
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
