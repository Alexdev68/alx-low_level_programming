#include "main.h"
#include <stdlib.h>

/**
 * *create_array - This creates an array of chars
 * @size: This is the size desired
 * @c: This is the character to be used to initialize the array
 * Return: returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
