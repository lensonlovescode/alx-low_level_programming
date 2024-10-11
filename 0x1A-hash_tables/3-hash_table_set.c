#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *my_node, *chain;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, 1024);
	chain = ht->array[index];

	if (check_duplicate_key(chain, key, value) == 1)
	{
		return (1);
	}
	my_node = create_node(key, value);
	if (my_node == NULL)
	{
		return (0);
	}

	if (chain == NULL)
	{
		ht->array[index] = my_node;
		return (1);
	}

	my_node->next = chain;
	ht->array[index] = my_node;

	return (1);
}
/**
 * create_node - Creates a new node for the hash table.
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key. value can be an empty string
 * Return: pointer to the newly created node, or NULL if failed
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *my_node;
	char *my_value, *my_key;

	my_value = strdup(value);
	if (my_value == NULL)
	{
		return (NULL);
	}

	my_key = strdup(key);
	if (my_key == NULL)
	{
		free(my_value);
		return (NULL);
	}

	my_node = malloc(sizeof(hash_node_t));
	if (my_node == NULL)
	{
		free(my_key);
		free(my_value);
		return (NULL);
	}

	my_node->key = my_key;
	my_node->value = my_value;
	my_node->next = NULL;
	return (my_node);
}
/**
 * check_duplicate_key - checks for duplicate keys
 * and replaces value with a new one if found
 * @chain: head of the linked list at the hash index
 * @key: the key to check
 * @value: the new value to update the key with if found
 * Return: 1 if the key was found and updated, 0 otherwise
 */
int check_duplicate_key(hash_node_t *chain, const char *key, const char *value)
{
	char *new_value;

	while (chain != NULL)
	{
		if (strcmp(chain->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}

			free(chain->value);
			chain->value = new_value;
			return (1);
		}
		chain = chain->next;
	}
	return (0);
}

