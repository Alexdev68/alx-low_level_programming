#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - This function deletes a hash table
 * @ht: This is the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *pair;
	hash_node_t *current;

	while (i < ht->size)
	{
		if (ht->array != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				pair = current;
				current = current->next;
				free(pair->key);
				free(pair->value);
				free(pair);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
