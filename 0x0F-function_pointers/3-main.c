#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the main function
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error");
		Exit(98);
	}
	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);

	int (*get_op_func(char *s))(int, int);

	oper = get_op_func(*operator);

	return ();
	
}
