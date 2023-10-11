#include "main.h"
/**
 * _islower - this checks if c is lower or upper case
 *
 * @c: this is the parameter to be checked
 *
 * Return: this will return 1 when c is uppercase and 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
