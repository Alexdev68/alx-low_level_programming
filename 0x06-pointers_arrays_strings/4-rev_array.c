#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This displays the reverse of arrays
 * @a: This is a point
 * @n: This is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int c, t;

	for (c = 0; c < n/2; c++)
	{
		t = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = t;
	}
}
