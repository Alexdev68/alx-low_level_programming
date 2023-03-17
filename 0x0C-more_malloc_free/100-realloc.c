#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_ptr)
	{
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}

	return (new_ptr);
}
