#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is the main function
 * @argc: this is the number of arguments
 * @argv: this are the arguments passed
 * Return: this will return 0 if both parameters are present
 * and will return 1 if one of or both parameters are missing
 */
int main(int argc, char *argv[])
{
	int product;
	int first;
	int second;
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	product = first * second;
	printf("%d\n", product);
	return (0);
}
