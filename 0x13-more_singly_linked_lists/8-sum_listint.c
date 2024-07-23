#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t linked list.
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: If the list is empty, returns 0. Otherwise, returns the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int result;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;
	result = 0;

	while (ptr != NULL)
	{
		result += ptr->n;
		ptr = ptr->next;
	}
	return (result);
}
