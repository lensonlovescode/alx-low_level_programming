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
	char mystring[] = "abcdefghijklmnopqrst";

	for (int i = 0; mystring[i] != '\0'; i++)
	{
		putchar(mystring[i]);
	}
}
