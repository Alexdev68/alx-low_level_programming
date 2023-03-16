#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - This concatenates two strings
 * @s1: This is the first string
 * @s2: This is the second string
 * @n: This is the amount of bytes that should be concatenated from s2
 * Return: This return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len = strlen(s1);
	int len_s2 = strlen(s2) - n;
	char *new_loc;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str = (char *) malloc(sizeof(char) * (len * len_s2) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	/*
	if (n >= len_s2)
	{
		return (s2);
	}*/

	new_loc = str;

	while (*s1)
	{
		*new_loc = *s1;
		new_loc++;
		s1++;
	}

	while (*s2 && n--)
	{
		*new_loc = *s2;
		new_loc++;
		s2++;
	}
	new_loc = '\0';

	return (str);
}
