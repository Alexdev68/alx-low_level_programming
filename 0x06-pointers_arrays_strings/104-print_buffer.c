#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int f, u, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (f = 0; f < size; f += 10)
	{
		u = size - f < 10 ? size - f : 10;
		printf("%08x: ", f);
		for (i = 0; i < 10; i++)
		{
			if (i < u)
				printf("%02x", *(b + f + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < u; i++)
		{
			int c = *(b + f + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
	}
}

