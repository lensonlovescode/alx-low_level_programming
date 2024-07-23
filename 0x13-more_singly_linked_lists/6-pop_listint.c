#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node's data (n).
 * @head: A pointer to the pointer of the head node.
 * Return: If the linked list is empty, returns 0.
 *         Otherwise, returns the data of the deleted head node.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;

	data = temp->n;

	(*head) = (*head)->next;

	free(temp);

	return (data);
}

