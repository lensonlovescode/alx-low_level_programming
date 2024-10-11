#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			temp = node;

			free(temp->key);
			free(temp->value);
			free(temp);

			node = node->next;
		}
	}

	free(ht->array);
	free(ht);
}

