#include "main.h"
#include <stdio.h>
/**
 * main - this is the main function
 * @argc: this is the number of arguments
 * @argv: this are the actual arguments
 * Return: this will return 0
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;
	putchar('0' + argc - 1);
	putchar('\n');
	return (0);
}
