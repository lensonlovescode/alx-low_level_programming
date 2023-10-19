#include "main.h"
#include <stdio.h>
#include <string.h>
/**	
 * _strncpy - this copies the source string to the destination
 * @dest: this is the destination string
 * @src: this is the source string
 * @n: this is the number of characters to be copied
 * Return: this will return the destination string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	char *q = src;
	int i;

	for (i = 0; i < n; i++)
	{
		p[i] = q[i];
		p[sizeof(p)] = '\0';
	}
	return (p);
}
