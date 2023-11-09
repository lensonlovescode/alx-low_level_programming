#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the main function
 * @argc: this is the number of arguments
 * @argv: this is the operator symbol
 * @num1: this is the first integer
 * @num2: this is the second integer
 * @result: this is the results of the inal operation
 * @operator: this is the operation symbol
 * @op: this is the operation to be performed which is obtained
 * from the return value of get_op_func
 *
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *operator;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	
	op = get_op_func(operator);

	if (op == NULL)
		printf("Error\n");

	result = op(num1, num2);

	return (result);
}
