#include "main.h"
#include <stddef.h>
/**
 * _strchr - this locates the first ocurrence of a character
 * @s: this is the string to be scouted
 * @c: this is the character to be identified
 * Return: this returns the pointer to the occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
