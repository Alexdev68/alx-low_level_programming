#include "hash_tables.h"
#include <stdlib.h>

/**
 * *hash_table_create - This function creates a hash table
 * @size: This is the size of the array
 * Return: This returns the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *ntable;

	ntable = malloc(sizeof(hash_table_t));
	if (ntable == NULL)
	{
		return (NULL);
	}

	ntable->size = size;

	ntable->array = calloc(ntable->size, sizeof(hash_node_t *));

	for (i = 0; i < ntable->size; i++)
	{
		ntable->array[i] = NULL;
	}

	return (ntable);
}
