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
	char *my_value, *my_key;

	if (ht == NULL)
		return (0);
	my_value = strdup(value);
	my_key = strdup(key);
	if (key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	my_node = (hash_node_t *)malloc(sizeof(hash_node_t *));
	if (my_node == NULL)
		return (0);
	my_node->key = (char *)malloc(sizeof(char *));
	if (my_node->key == NULL)
	{
		free(my_node);
		return (0);
	}
	my_node->value = (char *)malloc(sizeof(char *));
	if (my_node->value == NULL)
	{
		free(my_node->key);
		free(my_node);
		return (0);
	}
	my_node->key = my_key;
	my_node->value = my_value;
	my_node->next = NULL;
	index = key_index((const unsigned char *)key, 1024);
	chain = ht->array[index];
	if (chain == NULL)
	{
		chain = my_node;
		return (1);
	}
	my_node->next = chain;
	ht->array[index] = my_node;
	return (1);
}
