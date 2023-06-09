#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - This function prints a hash table
 * @ht: This is the hash table containning what needs to be printed
 * Return: This function returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;
	hash_node_t *current;

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

			current = ht->array[i];

			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);

				current = current->next;

				if (current != NULL)
				{
					printf(", ");
				}
			}
			count++;
		}
	}
	printf("}\n");
}
