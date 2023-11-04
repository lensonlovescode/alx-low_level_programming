#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - this concatenates two strings but the second string
 * only has the first n characters included in the final string.
 * @n: this is the first number of characters to be included in the
 * final string
 * @s1: this is the first string and all it's characters
 * are to be included
 * @s2: this is the second string and only the first n characters are to be
 * included in the string concatenate
 * Return: this will return a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int len1;
	unsigned int len2;
	char *ptr;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			ptr[len1 + j] = s2[j];
		}
		ptr[len1 + j + 1] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			ptr[len1 + j] = s2[j];
		}
	}
		ptr[len1 + j + 1] = '\0';
	return (ptr);
}
