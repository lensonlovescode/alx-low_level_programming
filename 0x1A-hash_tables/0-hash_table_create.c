#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: is the size of the array
 * Return: returns a pointer to the new hash table
 * or if something went wrong, returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *my_table;

	my_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (my_table == NULL)
	{
		return (NULL);
	}

	my_table->size = size;

	my_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (my_table->array == NULL)
	{
		free(my_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		my_table->array[i] = NULL;
	}

	return (my_table);

}
