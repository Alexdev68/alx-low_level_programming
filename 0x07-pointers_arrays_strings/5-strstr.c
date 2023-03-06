#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * *_strstr - This locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (strncmp(haystack, needle, strlen(needle)) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

