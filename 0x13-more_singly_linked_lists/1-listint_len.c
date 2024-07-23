#include "lists.h"
/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to the head node
 * Return: returns the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	count = 0;
	ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
