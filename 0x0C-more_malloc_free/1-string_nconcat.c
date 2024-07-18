#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * @n: the number of bytes to be concatenated
 * Return: If concatenation fails returns NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *big_str;
	int length;
	unsigned long int i;
	unsigned long int j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	big_str = (char *)malloc((n * sizeof(char)) + 1);

	if (big_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0' && i < n; i++)
	{
		big_str[i] = s1[i];
	}

	j = 0;

	while (s2[j] != '\0' && j < n)
	{
		big_str[i + j] = s2[j];
		j++;
	}

	big_str[i + j] = '\0';

	return (big_str);
}
