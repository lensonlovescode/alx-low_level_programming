#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - this  returns a pointer to a newly allocated space in memory,
 * which contains the new string
 * @s1: this is the first string
 * @s2: this is the second string
 * Return: this will return the pointer to the concatenated string
 * and null if the concatenation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	char *ptr = malloc((len1 + len2) * (sizeof(char)) + 1);

	if (ptr != NULL)
	{
		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		if (s1 != NULL && s2 != NULL)
		{
			for (i = 0; i < len1; i++)
			{
				ptr[i] = s1[i];
			}
			for (j = 0; j < len2; j++)
			{
				ptr[len1 + j] = s2[j];
			}
			ptr[len1 + j + 1] = '\0';
		}
		else if (s1 == NULL || s2 == NULL)
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














