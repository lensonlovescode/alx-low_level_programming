#include "main.h"
/**
 * _isupper - this checks if c is uppercase
 *
 * @c: this is the parameter to be evaluated
 *
 * Return: this will return 0 or 1
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
