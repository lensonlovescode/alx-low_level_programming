#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * @n: The number of bytes to be concatenated
 * Return: returns NULL on failure or pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *big_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	big_str = malloc(sizeof(char) * (len1 + n + 1));
	if (big_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		big_str[i] = s1[i];
	for (j = 0; j < n; j++)
		big_str[len1 + j] = s2[j];
	big_str[len1 + j] = '\0';
	return (big_str);
}

