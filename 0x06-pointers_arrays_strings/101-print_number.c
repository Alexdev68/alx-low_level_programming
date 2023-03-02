#include "main.h"

/**
 * print_number - This is used to print an integer
 * @n: Integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int un = n;

	if (n < 0)
	{
		_putchar('-');
		un = -un;
	}
	if (n == 0)
	{
		_putchar(0);
	}
	if ((un / 10) > 0)
	{
		print_number(un / 10);
	}
	_putchar((un % 10) + '0');
}
