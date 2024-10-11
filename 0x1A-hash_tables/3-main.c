#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	if (ht == NULL)
	{
		fprintf(stderr, "Failed to create hash table\n");
		exit (EXIT_FAILURE);
	}

	printf("\nAdding elements...\n\n");

	printf("\t\tAdding element 1: Key: 'betty', Value: 'cool'\n\n");
	hash_table_set(ht, "betty", "cool");

	printf("Adding element 2: Key: 'hetairas', Value: 'value1'\n");
	hash_table_set(ht, "hetairas", "value1");

	printf("Adding element 3: Key: 'heliotropes', Value: 'value2'\n");
	hash_table_set(ht, "heliotropes", "value2");

	printf("Adding element 4: Key: 'betty', Value: 'awesome'\n");
	hash_table_set(ht, "betty", "awesome");

	printf("Adding element 5: Key: 'mentioner', Value: 'value3'\n");
	hash_table_set(ht, "mentioner", "value3");

	printf("Adding element 6: Key: 'hetairas', Value: 'updated_value'\n");
	hash_table_set(ht, "hetairas", "updated_value");

	printf("\t\tAll elements added successfully!\n\n");

	print_hash_table(ht);

	return (EXIT_SUCCESS);
}
/**
 * print_hash_table - prints all key/value pairs in the hash table
 * @ht: the hash table to print
 */
void print_hash_table(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		printf("Hash table is NULL\n");
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (node->key != NULL && node->value != NULL)
			{
				printf("Key: %s, Value: %s\n", node->key, node->value);
			}
			node = node->next;
		}
	}
}
      
