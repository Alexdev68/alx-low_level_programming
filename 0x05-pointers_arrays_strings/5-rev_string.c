#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: character
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, a;
	char Last_char;

	while (*s)
	{
		s++;
		len++;
	}
	for (a = 0; a < len; a++)
	{
		s--;
	}
	for (a = 0; a < (len / 2); a++)
	{
		int last = len - 1;

		Last_char = s[last - a];
		s[last - a] = s[a];
		s[a] = Last_char;
	}
}
