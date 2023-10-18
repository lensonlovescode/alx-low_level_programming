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
	char *s1 = dest;
	char *s2 = src;
	int m = n;
	int len1;
	int i;

	len1 = strlen(s1);

	for (i = 0; i < m; i++)
	{
		s1[len1 + i] = s2[i];
	}
	return (s1);
}
