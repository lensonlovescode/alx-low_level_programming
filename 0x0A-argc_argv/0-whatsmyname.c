#include "main.h"
#include <stdio.h>
/**
 * main - this is the main function that prints the name of the function
 * @argc: this is the number of commandline arguments
 * @argv: this is the string to be printed
 * Return: this returns the name of the program
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		int i = 0;

		while (argv[0][i] != '\0')
		{
			_putchar(argv[0][i]);
			i++;
		}
	}
	return (0);
}
