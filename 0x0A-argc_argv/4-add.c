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
	int j;

	sum = 0;
	i = 1;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
