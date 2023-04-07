#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - This function prints the binary representation of a number
 * @n: This is the number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	int i, bin;
	int len = sizeof(n) * 8;
	int leading_zeros = 1;

	for (i = (len - 1); i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
