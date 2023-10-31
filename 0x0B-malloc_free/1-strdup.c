#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 */
char *_strdup(const char *str)
{
	char *ptr;
	int i;
	int length = strlen(str);

	if (str != NULL)
	{
		ptr = (char *)malloc(length*sizeof(char));
		for (i = 0; i < length; i++)
		{
			ptr[i] = str[i];
		}
		if (str[length] > ptr[length])
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
