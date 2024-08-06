#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the first node
 * @n: the integer to be filled in the new node
 * Return: returns a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	temp = (*head);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
