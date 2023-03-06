#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - This gets the length of a prefix substring
 * @s: Characters
 * @accept: Characters
 * Return: init_length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a, init_length = 0;
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (a = 0; a < len2; a++)
		{
			if (accept[a] == s[i])
			{
				found_match = true;
				break;
			}
		}
		if (!found_match)
		{
			break;
		}
		else
		{
			init_length++;
		}
	}
	return (init_length);
}
