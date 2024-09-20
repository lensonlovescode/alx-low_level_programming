#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint linked list
 * @h: head of the linked list
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count;

	node_count = 0;

	if (h->next == NULL)
	{
		node_count = 1;
		printf("%d\n", 1);
		return (node_count);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		node_count += 1;
		h = h->next;
	}
	node_count++;
	printf("%d\n", h->n);
	return (node_count);
}
