#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is the main function
 * @a: this is the first parameter
 * @b: this is the second parameter
 * @product: this is the product of the two parameters
 * Return: this will return 0 if both parameters are present
 * and will return 1 if one of or both parameters are missing
 */
int main (int argc, char *argv[])
{
	int product;
	int first = atoi(argv[1]);
	int second = atoi(argv[2]);

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = first*second;
		printf("%d\n", product);
		return (0);
	}
}
