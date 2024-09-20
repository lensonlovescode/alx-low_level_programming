#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning of a doubly linked list
 * @n: data
 * @head: head to the first node
 * Return: returns a pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	if (head == NULL)
	{
		return (NULL);
	}

	new_head = (dlistint_t*)malloc(sizeof(dlistint_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->next = *head;
	new_head->n = n;
	new_head->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_head;
	}

	*head = new_head;
	return (new_head);

}
