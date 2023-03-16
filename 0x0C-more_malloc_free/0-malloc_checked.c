#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - This allocates memory using malloc
 * @b: This is the amount of memory to be allocated
 * Return: This returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
