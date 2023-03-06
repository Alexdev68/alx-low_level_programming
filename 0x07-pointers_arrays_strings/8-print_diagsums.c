#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: Integer
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	long d1 = 0;
	long d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		d2 += a[i * size + (size - i - 1)];
	}

	printf("%ld, %ld\n", d1, d2);
}
