#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of comandline arguments
 * @argv: array of arguments
 * Return: returns 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	i = 1;

	while (i < argc)
	{
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
