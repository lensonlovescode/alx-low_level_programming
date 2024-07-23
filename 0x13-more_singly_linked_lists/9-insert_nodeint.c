#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t linked list.
 * @head: A pointer to the pointer of the head of the listint_t linked list.
 * @idx: The index at which the new node should be added, starting from 0.
 * @n: The data to be added to the new node.
 *
 * Return: If the new node is successfully added, returns the address of the new node.
 *         If it is not possible to add the new node at the specified index, returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *ptr;
	unsigned int index;

	if (*head == NULL)
	{
		return (NULL);
	}
	
	new_node = malloc(sizeof(listint_t));
	index = 0;
	ptr = (*head);

	while (ptr != NULL)
	{
		if (index == idx - 1)
		{
			new_node->next = ptr->next;
			new_node->n = n;
			ptr->next = new_node;
			return (new_node);
		}
		index++;
		ptr = ptr->next;
	}
	free(new_node);
	return (NULL);

}

