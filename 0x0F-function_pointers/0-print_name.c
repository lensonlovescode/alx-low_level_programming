#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - this prints out the name as it is
 * @name: this is the name to be printed
 * @f: this is the function pointer
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
