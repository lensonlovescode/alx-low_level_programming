#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	i = 1;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return(0);
}
