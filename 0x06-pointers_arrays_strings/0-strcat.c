#include "main.h"
#include <string.h>

/**
 * *_strcat - this will concatenate two strings
 * @dest: this points to where the destination string is in in memory
 * @src: this points to where the source string is in in memory
 *
 * Return: this will return the destination string s1
 *
 */
char *_strcat(char *dest, char *src)
{
	char *s1 = dest;
	char *s2 = src;
	int len1;
	int len2;
	int i;

	len1 = strlen(s1);
	len2 = strlen(s2);

	for (i = 0; i <= len2; i++)
	{
		s1[len1 + i] = s2[i];
	}
	return (s1);
}
