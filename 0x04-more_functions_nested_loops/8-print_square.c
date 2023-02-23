#include "main.h"

/**
 * print_square - This print a square
 * @size: This is the size of the square
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
