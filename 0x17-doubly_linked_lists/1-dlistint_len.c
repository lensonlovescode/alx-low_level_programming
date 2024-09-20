#include "lists.h"
/**
 * dlistint_len - returns the number of items in a dlistint linked list
 * @h: head of the linked list
 * Return: returns the number of items
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count;

	node_count = 0;

	if (h == NULL)
	{
		node_count = 0;
		return (node_count);
	}
	if (h->next == NULL)
	{
		node_count = 1;
		return (node_count);
	}
	while (h->next != NULL)
	{
		node_count += 1;
		h = h->next;
	}
	node_count++;
	return (node_count);
}
