#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	if (s == NULL)
		return (NULL);

	while (strcmp(ops[i][1], s) != 0)
		i++;
	return (*ops[i][2]);
	
}
