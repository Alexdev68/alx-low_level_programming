#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - This function concatenates two strings
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: This returns a pointer to the newly allocated space in the memory
 * containing the contents of two strings or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1;
	int size_s2;
	char *cat;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);
	cat = malloc(sizeof(char) * ((size_s1 + size_s2) + 1));

	if (cat == NULL)
	{
		return (NULL);
	}

	concat = cat;
	while (*s1)
	{
		*concat = *s1;
		concat++;
		s1++;
	}
	while (*s2)
	{
		*concat = *s2;
		concat++;
		s2++;
	}
	*concat = '\0';
	return (cat);
}
