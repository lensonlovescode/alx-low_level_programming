#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - this adds two integers
 * op_sub - this subtracts one integer from the other
 * op_mul - this multiplies two integers
 * op_div - this divides one integer by the other
 * op_mod - this performs modulo operarions on two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
