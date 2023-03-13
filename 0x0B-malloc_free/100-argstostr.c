#include "main.h"
#include <stdlib.h>

/**
* argstostr - This concatenates all the arguments of this program
* @ac: Arguments count
* @av: Arguments vector
*Return: This returns pointer to the new string or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int a, b, c, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			len++;
		}

	}
	len += ac;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}

	return (str);
}
