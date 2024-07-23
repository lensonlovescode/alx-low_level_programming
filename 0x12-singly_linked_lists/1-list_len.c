#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of elements (nodes) in the linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t count;

	if (h == NULL)
	{
		return (0);
	}

	count = 0;
	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}               
