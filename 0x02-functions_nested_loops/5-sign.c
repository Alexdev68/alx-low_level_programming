#include "main.h"

/**
 * print_sign - Entry point
 * @n: Declared int
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
	else
	{
		_putchar(' ');
		return (0);
	}
}
