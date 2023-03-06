#include "main.h"
#include <stddef.h>

/**
 * *_strchr - This locates a character in a string
 * @s: String
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (NULL);
		}
	}
	return (NULL);
}
