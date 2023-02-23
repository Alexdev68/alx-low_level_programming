#include "main.h"

/**
 * print_line - Prints a line according to the number tested
 * @n: number of times _ should be printed
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
