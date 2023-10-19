#include "main.h"
/**
 * _strcmp - this compares the two strings
 * @s1: this is the first string
 * @s2: this is the second string
 * Return: this will return an integer corresponding to how the strings compare
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		break;
	}
	return (s1[i] - s2[i]);
}
