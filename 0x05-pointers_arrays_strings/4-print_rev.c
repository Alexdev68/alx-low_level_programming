#include "main.h"

/**
 * print_rev - This prints the reverse of strings
 * @s: Character
 * Return: Nothing
 */
void print_rev(char *s)
{
	int wrds = 0;

	while (*s)
	{
		s++;
		wrds++;
	}
	while (wrds)
	{
		s--;
		_putchar(*s);
		wrds--;
	}
	_putchar('\n');
}
