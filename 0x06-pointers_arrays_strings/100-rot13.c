#include "main.h"
#include <ctype.h>

/**
 * *rot13 - This encodes the string using rot13
 * @str: pointer
 * Return: str
 */
char *rot13(char *str)
{
	int i, a;

	char fst_13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char scd_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJkLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a < 52; a++)
		{
			if (str[i] == fst_13[a])
			{
				str[i] = scd_13[a];
				break;
			}
		}
	}
	return (str);
}
