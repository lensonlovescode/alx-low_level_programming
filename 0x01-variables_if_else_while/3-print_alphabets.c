#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: this returns 0
 *
 * putchar - prints the alphabets to the console
 */
int main(void)
{
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(letters[i]);
	}

	putchar('\n');

	return (0);
}
