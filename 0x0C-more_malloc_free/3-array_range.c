#include "main.h"
#include <stdlib.h>

/**
 * *array_range - This creates an array of integers
 * @min: This is representing the lowest value
 * @max: This is representing the higest value
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *rng;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	rng = (int *) malloc(sizeof(int) * max - min + 1);

	if (rng == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		rng[i] = min++;
	}

	return (rng);
}
