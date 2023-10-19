#include "main.h"
#include <string.h>

/**
 * *_strncat - this will concatenate two strings
 * @dest: this points to where the destination string is in in memory
 * @src: this points to where the source string is in in memory
 * @n: this is the number of character in the source string to be concatenated
 *
 * Return: this will return the destination string s1
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int i;

	len1 = strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
