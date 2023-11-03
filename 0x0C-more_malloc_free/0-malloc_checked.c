#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this allocates memory using malloc
 * @b: this tis the numer of bytes to be allocated	
 * @ptr: this is the pointer to the memory location allocated
 * Return: this wil return ptr
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	return (ptr);	
}
