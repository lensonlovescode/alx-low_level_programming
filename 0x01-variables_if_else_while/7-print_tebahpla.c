#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: this returns 0
 *
 * putchar - prints the alphabets in reverse to the console
 */
int main(void)
{
	char letters[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}

	putchar('\n');

	return (0);
}
