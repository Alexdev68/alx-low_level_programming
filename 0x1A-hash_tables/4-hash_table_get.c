#include "hash_tables.h"
#include <string.h>

/**
 * *hash_table_get - This function retrieves a value from the hash table
 * @ht: This is the hash table that we ill get the values from
 * @key: This is what will be used in finding the value
 * Return: This returns the value or NULL if it failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *pair;

	index = key_index((const unsigned char *)key, ht->size);

	pair = ht->array[index];

	if (pair != NULL)
	{
		if (strcmp(pair->key, key) == 0)
		{
			return (pair->value);
		}
	}
	return (NULL);
}
