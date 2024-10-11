#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	printf("\t\t\t\tGenerating Hash...\n\n");
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	printf("\t\t\t\tHash created successfully!\n\n");
	return (hash);
}
