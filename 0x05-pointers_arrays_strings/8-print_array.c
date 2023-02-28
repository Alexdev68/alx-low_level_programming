#include "main.h"
#include <stdio.h>

/**
 * print_array - Displays the contents of arrays
 * @a: Integer
 * @n: Integer
 * Return: Noting
 */
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
