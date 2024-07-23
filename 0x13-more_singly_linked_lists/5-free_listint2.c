#include "lists.h"
/**
 * free_listint2 - frees a list and sets the head to NULL and 
 * reains the original head
 * @head - pointer to the head node
 * Return: returns nothing
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		return;
	}

	ptr = (*head)->next;

	while ((*head) != NULL)
	{

		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
}

