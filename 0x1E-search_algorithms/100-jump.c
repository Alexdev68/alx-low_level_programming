#include "search_algos.h"
#include <stdio.h>
#include <math.h>


int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t sq = sqrt(size);
	size_t h;

	if (array == NULL)
	{
		return (-1);
	}

	while (array[sq] < value && sq < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = sq;
		sq += sqrt(size);

	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);	
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
