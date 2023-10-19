#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - this copies the source string to the destination
 * @dest: this is the destination string
 * @src: this is the source string
 * @n: this is the number of characters to be copidv
 * Return: this will return the destination string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
