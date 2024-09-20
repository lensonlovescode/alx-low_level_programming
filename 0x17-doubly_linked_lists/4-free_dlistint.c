#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
