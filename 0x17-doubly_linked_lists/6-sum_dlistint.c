#include "lists.h"
/**
 * sum_dlistint - gets sum of data in all nodes of a linked list
 * @head: the first node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
