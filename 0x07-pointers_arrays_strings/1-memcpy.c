#include "main.h"
/**
 * _memcpy - this copies the memory area
 * @dest: this is the destination memory
 * @src: this is the source memory
 * @n: this it the nmber of bytes to be copied into
 * Return: this will return a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
