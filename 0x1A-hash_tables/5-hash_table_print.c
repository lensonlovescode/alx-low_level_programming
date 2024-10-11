#include "hash_tables.h"
/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (node != NULL)
			{
				printf(", ");
			}
		}
	}
	printf("}\n");
}
