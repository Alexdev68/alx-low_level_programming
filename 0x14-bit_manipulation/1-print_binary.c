#include "main.h"
#include <stdio.h>

/**
 * print_binary - This function prints the binary representation of a number
 * @n: This is the number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	int i, bin;

	for (i = 31; i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
