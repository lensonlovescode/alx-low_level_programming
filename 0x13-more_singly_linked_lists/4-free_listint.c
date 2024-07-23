#include "lists.h"
/**
 * free_listint - frees a list
 * @head - pointer to the head node
 * Return: returns nothing
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	if (ptr == NULL)
	{
		exit(98);
	}

	while (head != NULL)
	{

		ptr = head->next;
		free(head);
		head = ptr;
	}
}

