#include "lists.h"
/**
 * add_nodeint - adds a node at the bginning of a list
 * @head: a pointer to a pointer to the first node
 * @n: thi integer value to be filled in the list
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head= malloc(sizeof(listint_t));

	if ((*head) == NULL)
	{
		(*head) = new_head;
		return (new_head);
	}

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->next = (*head); 
	new_head->n = n;
	(*head) = new_head;

	return (new_head);
}
