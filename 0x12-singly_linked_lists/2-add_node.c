#include "lists.h"
/**
 * add_node - Adds a new node at the beginning o * f a list_t list.
 * @head: A pointer to the pointer of the head o * f the linked list.
 * @str: The string data to be added to the new  * node.
 * Return: On success, returns a pointer to the  * newly added node,
 * On failure (memory allocation error), returns * NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new_head;

	if (head == NULL)
	{
		return (NULL);
	}

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->next = *head;
	*head = new_head;
	new_head->len = strlen(str);

	new_head->str = strdup(str);

	if (new_head->str == NULL)
	{
		return (NULL);
	}

	return (new_head);
}
