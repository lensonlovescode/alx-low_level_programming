#include "hash_tables.h"
/**
 * hash_table_get - gets the value associated with a key
 * @ht: A pointer to the hash table.
 * @key: The key to look for.
 * Return: A pointer to the value, or NULL if the key
 *         could not be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
