#include "main.h"

/**
 * print_triangle - Prints a triangle on the screen
 * @size: Number of time the \ character should be printed
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= (size - 1); a++)
		{
			for (b = 0; b < (size - 1) - a; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
