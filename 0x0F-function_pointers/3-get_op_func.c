#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
	if (s == NULL)
		return ();
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;
	
}
