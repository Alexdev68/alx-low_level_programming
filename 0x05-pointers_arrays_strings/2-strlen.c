#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Character
 * Return: Character
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; c++)
	{
		s++;
	}

	return (c);
}
