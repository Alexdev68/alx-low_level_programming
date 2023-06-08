#include "hash_tables.h"
#include <stddef.h>

/**
 * key_index - This function gets the index of the key entered
 * @key: This is the key whose index we are checking
 * @size: This is the array size
 * Return: This returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
