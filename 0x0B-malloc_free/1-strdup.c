#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory which
 * contain a copy of the string
 * @str: This the string pointer
 * Return: returns a pointer to the duplicated string, and NULL if insufficent
 * memory was available
 */
char *_strdup(char *str)
{
	int size;
	char *dup;
	char *duplication;

	size = strlen(str);
	dup = malloc(sizeof(char) * size + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	duplication = dup;
	while (*str)
	{
		*duplication = *str;
		duplication++;
		str++;
	}
	*duplication = '\0';
	if (duplication == NULL)
	{
		return (NULL);
	}
	return (dup);
}
