#include "main.h"
#include <string.h>
/**
 * _strspn - Get the length of a prefix substring.
 *
 * @s: The string to be searched.
 * @accept: The string containing characters to be counted in the prefix.
 *
 * Return: The number of characters in the initial segment of s
 * that consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int length = 0;
	size_t len1 = strlen(s);
	size_t len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				break;
			}
			else
			{
				continue;
			}
		}
		if (j == len2)
		{
			break;
			return (length);
		}
	}
	return (length);
}
