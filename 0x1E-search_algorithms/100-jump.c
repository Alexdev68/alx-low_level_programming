#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - This function implements the jump search algorithm
 * @array: This  is a pointer to the first element of the array to search in
 * @size: This is the number of elements in array
 * @value: This is the value to search for
 * Return: This returns the first index where value is located or -1 if the
 * array is NULL or the value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t sq = 0;
	size_t h;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (sq < size && array[sq] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", sq, array[sq]);
		i = sq;
		sq += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, sq);

	for (h = i; h <= sq && h < size; h++)
	{
		printf("Value checked array[%ld] = [%d]\n", h, array[h]);
		if (array[h] == value)
		{
			return (h);
		}
	}

	return (-1);
}
