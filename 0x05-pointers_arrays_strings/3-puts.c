#include "main.h"

/**
 * _puts - Prints a string to the standard-output
 * @str: Character
 * Return: Nothing
 */
void _puts(char *str)
{
	int wrds;

	for (wrds = 0; *str != '\0'; wrds++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
