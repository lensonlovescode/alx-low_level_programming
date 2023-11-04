#include "main.h"
/***
 * _calloc - this alocates memory for an array
 * @nmemb: this is the number of elements in the array
 * @size: this is the size of each of each element of the array
 * Return: this return a pointer to the allocated memory if success and
 * null if failiure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb != 0 || size != 0)
	{
		ptr = calloc(nmemb, size);
	}
	else
	{
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);

}
