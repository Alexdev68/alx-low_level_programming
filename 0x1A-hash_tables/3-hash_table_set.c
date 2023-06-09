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
	hash_node_t *current;
	unsigned long int index;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	if (key == NULL || ht == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	new->key = malloc(strlen(key));
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	strcpy(new->key, key);
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return (0);
	}
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
