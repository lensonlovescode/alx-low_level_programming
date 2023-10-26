#include "main.h"
#include <string.h>

/**
 *  _print_rev_recursion - this prints the string in reverse followed by a new line
 *  @s: this is the string to be printed
 */
void _print_rev_recursion(char *s)
{
	unsigned int i;
	unsigned int length;
	
	length = strlen(s);
	i = length - 1;

	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
		_putchar ('\n');
}
