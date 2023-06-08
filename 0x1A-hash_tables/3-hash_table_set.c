#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	int hash;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}

	if (key == NULL)
	{
		return (0);
	}

	hash = hash_djb2((const unsigned char *)key);

	new->key = strdup(key);
	new->value = strdup(value);

	ht->array[hash] = new;

	return (1);
}
