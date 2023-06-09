#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - This function inserts an element into the hash table
 * @ht: This is the hash table
 * @key: This the key to be inserted
 * @value: This is the value to be inserted
 * Return: This returns 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	int index;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}

	if (key == NULL)
	{
		return (0);
	}

	new->key = strdup(key);
	new->value = strdup(value);

	index = hash_djb2((const unsigned char *)key);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
