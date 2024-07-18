#include "main.h"
/**
 * _realloc - reallocates memory to a pointer
 * @ptr: the pointer to be reallocated memory
 * @old_size: old size of the block in bytes
 * @new_size: new size in bytes to be allocated
 * Return: return NUll on failure or ptr with new size
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = realloc(ptr, new_size);
	}
	return (ptr);

}
