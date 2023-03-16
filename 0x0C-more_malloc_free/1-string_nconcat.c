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
	char *new_loc;
	unsigned int i = 0, j = 0, len_2, len;

	len = strlen(s1);
	len_2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < len_2)
		str = (char *) malloc(sizeof(char) * (len + n + 1));

	else if (n >= len_2)
		str = (char *) malloc(sizeof(char) * (len + len_2 + 1));

	if (str == NULL)
		return (NULL);

	new_loc = str;
	if (n >= len_2)
		while (s2[i] != '\0')
		{
			new_loc[i] = s2[i];
			i++;
		}

	while (s1[i] != '\0')
	{
		new_loc[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		new_loc[i] = s2[j];
		i++;
		j++;
	}
	new_loc = '\0';
	return (str);
}
