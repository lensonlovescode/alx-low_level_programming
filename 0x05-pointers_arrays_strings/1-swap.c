#include "main.h"
/**
 * swap_int - this swaps the values of two integers
<<<<<<< HEAD
 *
 * @a: this is the first integer to be used
 * @b: this is the second integer to be used
 *
 * Return: this will return 0
 */
wap_int(int *a, int *b)
{
	*a = *b
	*b = *a
=======
 * @a: this is the first integer
 * @b: this is the second integer
 * Return: this returns 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
>>>>>>> 3c94656269968436072b8614fde5161f29616607
}
