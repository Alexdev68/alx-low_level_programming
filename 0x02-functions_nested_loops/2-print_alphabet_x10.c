#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char x;
	int f;

	for (f = 0; f <= 9; f++)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	}
}
