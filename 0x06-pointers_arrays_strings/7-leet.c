#include "main.h"

/**
 * *leet - This encodes strings into 1337
 * @str:  This is a pointer
 * Return: This returns the encoded value of str
 */
char *leet(char *str)
{
	int i, a;
	char lowwer[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a < 5; a++)
		{
			if (str[i] == lowwer[a] || str[i] == upper[a])
			{
				str[i] = num[a];
			}
		}
	}
	return (str);
}
