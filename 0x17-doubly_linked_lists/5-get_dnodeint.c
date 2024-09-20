#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at an nth index
 * @head: the first node
 * @index: index for which node to be fetched
 * Return: a pointer to the node being searched for
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_idx;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	node_idx = 0;

	while (temp != NULL)
	{
		if (node_idx == index)
		{
			return (temp);
		}
		node_idx++;
		temp = temp->next;
	}
	return (NULL);
}
