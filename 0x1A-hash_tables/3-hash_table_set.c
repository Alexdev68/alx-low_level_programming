#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;

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

	ht->array[0] = new;

	return (1);
}
