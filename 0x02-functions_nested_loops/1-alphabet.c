#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this will print the alphabet characters in lower case
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}
