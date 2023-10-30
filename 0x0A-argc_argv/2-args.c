#include "main.h"
#include <stdio.h>
/**
 * main - this is the main function
 * @argc: this is the number of arguments
 * @argv: this are the actual arguments
 * Return: this will return 0
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			putchar(argv[i][j]);
		}
		putchar('\n');
	}
	return (0);
}
