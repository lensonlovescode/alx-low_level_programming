#include "main.h"

/**
 * _isalpha - this checks if c is a letter
 *
 * @c: this is the parameter to be checked
 *
 * Return: returns 0 or 1
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
