#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  _puts_recursion - this prints the string followed by a new line
 *  @s: this is the string to be printed
 */
void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (*s != '\0')
	{
		_putchar (s[i]);
		s++;
		i++;
		_puts_recursion(s);
	}
	else
	{
		_putchar ('\n');
	}
}
