#include "search_algos.h"
#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);

		if (i != size - 1)
                        printf(", ");
	}
	putchar('\n');

	while (left < right)
	{
		size_t mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
			left = mid + 1;

		else
			right = mid - 1;

		printf("Searching in array: ");

                for (i = left; i <= right; i++)
                {
                        printf("%d", array[i]);

                        if (i != right)
                                printf(", ");
                }
		putchar('\n');
	}
	return (-1);
}
