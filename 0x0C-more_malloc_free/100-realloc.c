#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - This reallocates a memory block using malloc
 * @ptr: This is a pointer to the previously allocated memory
 * @old_size: This is the size of the previously allocated memory
 * @new_size: This is the newly allocated memory where the old size
 * is reallocated to
 * Return: This returns a pointer contaning content from the start of
 * ptr up to the minimum of the old and new sizes or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (
