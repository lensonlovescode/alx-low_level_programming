#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the pointer of the head of the linked list.
 * @str: The string data to be added to the new node (duplicated).
 * Return: On success, returns the address of the new element.
 * On failure (memory allocation error), returns NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new_node, *ptr;

	if ((*head) == NULL)
	{
		new_node = malloc(sizeof(list_t));
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
		(*head) = new_node;
		return (new_node);
	}
	ptr = (*head);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}
