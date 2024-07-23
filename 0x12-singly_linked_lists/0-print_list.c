#include "lists.h"
/**
 * print_list - Prints the elements of a singly linked list
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes (elements) in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
	{
		printf("Empty list\n");
	}
	count  = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);

}
