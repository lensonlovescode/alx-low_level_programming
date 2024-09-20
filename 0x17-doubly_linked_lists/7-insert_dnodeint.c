#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: head node
 * @idx: index of the new node
 * @n: node data
 * Return: returns a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int node_idx;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	node_idx = 0;

	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	temp = *h;

	while (temp != NULL)
	{
		if (node_idx == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
		node_idx++;
		temp = temp->next;
	}
	return (NULL);
}
