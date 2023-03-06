#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - This searches a string for any of a set of bytes
 * @s: First string pointer
 * @accept: Second string pointer
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
