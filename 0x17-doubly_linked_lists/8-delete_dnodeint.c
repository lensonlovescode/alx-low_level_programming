#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: the first node
 * @index: the index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int node_idx;
	dlistint_t *temp, *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	tmp = temp;
	node_idx = 0;
	while (temp != NULL)
	{
		tmp = temp;
		if (node_idx == index - 1)
		{
			tmp = tmp->next->next;
			free(temp->next);
			temp->next = tmp;
			tmp->prev = temp;
			return (1);
		}
		temp = temp->next;
		node_idx++;
	}
	return (-1);
}
