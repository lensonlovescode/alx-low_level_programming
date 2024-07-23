#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: this is the pointer to the head/first node
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	ptr = h;
	count = 0;

	if (ptr == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}

