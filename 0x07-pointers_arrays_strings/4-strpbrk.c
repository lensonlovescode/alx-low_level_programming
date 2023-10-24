#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be searched.
 * @accept: The string containing characters to be identified
 * Return: The pointer to the string starting with
 * the identified chaacte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *temp = NULL;

	size_t len1 = strlen(s);
	size_t len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				temp = s + i;
				return (temp);
			}
		}
	}
	return (temp);
}
