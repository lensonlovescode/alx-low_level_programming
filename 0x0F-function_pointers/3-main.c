#include "3-calc.h"
#include <stdlib.h>
#include <stdio./**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int result;
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	result = oprt(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result)
	return (0);
}
