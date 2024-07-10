#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  _print_rev_recursion - this prints the string in reverse followed
 * by a new line
 *  @s: this is the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s + 1 == '\n')
	{
		_putchar(*s);
	}
	*s = *s + 1;
	_print_rev_recursion(s);
	_putchar(*s);
}
