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
	char letters[26] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(letters[i]);
	}
	return (0);
}
