#include "lists.h"
/**
 * you_are_beat - Function that prints statements before the main function is executed.
 * Return: nothing
 */
__attribute__((constructor))
void you_are_beat(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

