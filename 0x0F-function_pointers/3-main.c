#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((atoi(argv[2]) == '/' || atoi(argv[2]) == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
