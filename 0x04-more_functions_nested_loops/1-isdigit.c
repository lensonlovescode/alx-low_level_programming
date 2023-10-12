#include "main.h"
/**
 * _isdigit - this checks whether c is a digit
 * @c: this is the value to be evalclient_loop
 * Return: this will either be 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
