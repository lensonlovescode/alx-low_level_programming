#include "lists.h"
/**
 * add_nodeint - adds a node at the bginning of a list
 * @head: a pointer to a pointer to the first node
 * @n: thi integer value to be filled in the list
 * Return: returns the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
