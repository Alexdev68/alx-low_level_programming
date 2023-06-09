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
	hash_node_t * current;
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

	index = key_index((const unsigned char *)key, 1024);

	current = ht->array[index];

	if (current == NULL)
	{
		current = new;
	}
	else
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
