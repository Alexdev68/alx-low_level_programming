#include "main.h"

/**
 * _strlen_recursion - This returns the lenght of the string
 * @s: This is the string pointer
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
