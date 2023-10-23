#include "main.h"
/**
 * _strchr - this locates the first ocurrence of a character
 * @s: this is the string to be scouted
 * @c: this is the character to be identified
 * Return: this returns the pointer to the occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return(s);
		}
		s++;
	}
	return (0);
}
