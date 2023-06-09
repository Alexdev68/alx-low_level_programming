#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - This function prints a hash table
 * @ht: This is the hash table containning what needs to be printed
 * Return: This function returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int count = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (count > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			count++;
		}
	}
	printf("}\n");
}
