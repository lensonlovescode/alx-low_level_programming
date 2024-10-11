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

    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "value1");
    hash_table_set(ht, "heliotropes", "value2");
    hash_table_set(ht, "betty", "awesome");
    hash_table_set(ht, "mentioner", "value3");
    hash_table_set(ht, "hetairas", "updated_value");
    return (EXIT_SUCCESS);
}      
