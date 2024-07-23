#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the first node
 * @n: the integer to be filled in the new node
 * Return: returns a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new_node;

	if ((*head) == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		new_node->n  = n;
		new_node->next = NULL;
		(*head) = new_node;
		return (new_node);
	}
	
	ptr = (*head);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	
	return (new_node);
}
