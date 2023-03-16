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
	/*char *new_loc;*/
	unsigned int i, j, len_2 = 0, len = 0;


	len = strlen(s1);

	for (j = 0; s2[j] && j < n; j++)
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

	/*if (n >= len_2)
		while (s2[i] != '\0')
		{
			new_loc[i] = s2[i];
			i++;
		}*/

	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len_2; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
