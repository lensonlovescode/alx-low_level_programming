#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t linked list.
 * @index: The index of the node to retrieve, starting at 0.
 *
 * Return: If the node at the specified index exists, returns a pointer
 *         to that node. Otherwise, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *ptr;

	count = 0;
	ptr = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		if (ptr->next == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
	}
	return (ptr);

}
