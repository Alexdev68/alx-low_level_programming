#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *shash_table_create - This creates a hash table
 * @size: This is the size of the array
 * Return: This returns the newly created table or NULL if it failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ntable;

	ntable = malloc(sizeof(shash_table_t));
	if (ntable == NULL)
	{
		return (NULL);
	}

	ntable->size = size;
	ntable->shead = NULL;
	ntable->stail = NULL;

	ntable->array = calloc(ntable->size, sizeof(shash_node_t *));

	for (i = 0; i < ntable->size; i++)
	{
		ntable->array[i] = NULL;
	}

	return (ntable);
}

/**
 * shash_table_set - This function inserts an element into the hash table
 * @ht: This is the hash table
 * @key: This the key to be inserted
 * @value: This is the value to be inserted
 * Return: This returns 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	shash_node_t *current;
	unsigned long int index;

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	if (key == NULL || ht == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(new->key);
			free(new->value);
			free(new);
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	sorted_ht(ht, new);

	return (1);
}

/**
 * sorted_ht - This function inserts into a sorted doubly linked list
 * @ht: This is the hash table containing the doubly linked list
 * @new: This is the key value pair to be inserted
 */
void sorted_ht(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *sorted;

	sorted = ht->shead;
	if (sorted == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return;
	}

	else
	{
		if (strcmp(new->key, sorted->key) < 0)
		{
			sorted->sprev = new;
			new->snext = sorted;
			ht->shead = new;
			return;
		}
	}
	while (sorted->snext != NULL)
	{
		if (strcmp(new->key, sorted->snext->key) < 0)
		{
			sorted->snext->sprev = new;
			new->snext = sorted->snext;
			sorted->snext = new;
			new->sprev = sorted;
			return;
		}
		sorted = sorted->snext;
	}
	if (sorted->snext == NULL)
	{
		sorted->snext = new;
		new->sprev = sorted;
		ht->stail = new;
		return;
	}
}

/**
 * *shash_table_get - This function retrieves a value from the hash table
 * @ht: This is the hash table that we ill get the values from
 * @key: This is what will be used in finding the value
 * Return: This returns the value or NULL if it failed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *pair;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	pair = ht->array[index];

	while (pair != NULL)
	{
		if (strcmp(pair->key, key) == 0)
		{
			return (pair->value);
		}
		pair = pair->next;
	}
	return (NULL);
}

/**
 * shash_table_print - This function prints a hash table
 * @ht: This is the hash table containning what needs to be printed
 * Return: This function returns nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	int count = 0;
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");

	while (current != NULL)
	{
		if (count > 0)
		{
			printf(", ");
		}
		printf("'%s': '%s'", current->key, current->value);

		current = current->snext;

		count++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - This function prints a hash table
 * @ht: This is the hash table containning what needs to be printed
 * Return: This function returns nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int count = 0;
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;
	printf("{");

	while (current != NULL)
	{
		if (count > 0)
		{
			printf(", ");
		}
		printf("'%s': '%s'", current->key, current->value);

		current = current->sprev;

		count++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - This function deletes a hash table
 * @ht: This is the hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current;
	shash_node_t *next;

	current = ht->shead;

	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
	free(ht->array);
	free(ht);
}
