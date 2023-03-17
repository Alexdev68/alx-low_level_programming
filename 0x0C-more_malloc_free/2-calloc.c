#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - This allocates memory of an array using malloc
 * @nmemb: This represents the elements
 * @size: This is the size in bytes
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}

	cal = (char *) malloc(nmemb * size);

	if (cal == NULL)
	{
		return (NULL);
	}

	memset(cal, 0, nmemb * size);

	return (cal);
}
