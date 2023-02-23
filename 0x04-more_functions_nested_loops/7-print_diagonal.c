#include "main.h"

/**
 * print_diagonal - Prints a diagonal line across the screen
 * @n: Number of time the \ character should be printed
 */
void print_diagonal(int n)
{
	int a, b, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			c = a;
			for (b = 0; b <= c; b++)
			{
				if (b == c)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
