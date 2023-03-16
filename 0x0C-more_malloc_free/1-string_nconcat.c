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
	unsigned int i, k, len_2 = 0, len = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}

	for (k = 0; s2[k] != '\0' && k < n; k++)
	{
		len_2++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str = (char *) malloc(sizeof(char) * (len + len_2  + 1));

	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (k = 0; k < len_2; k++)
	{
		str[i + k] = s2[k];
	}
	str[i + k] = '\0';
	return (str);
}
