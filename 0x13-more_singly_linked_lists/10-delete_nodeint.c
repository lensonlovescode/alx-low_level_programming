#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: A pointer to the pointer of the head of the listint_t linked list.
 * @index: The index of the node to be deleted, starting from 0.
 * Return: returns 1 on succes, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx;
	listint_t *temp;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	ptr = (*head);
	temp = ptr->next;
	idx = 0;

	while (ptr != NULL)
	{
		if (index == idx + 1)
		{
			ptr->next = temp->next;
			free(temp);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
