#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - This function implements the binary search algorithm
 * @array: This  is a pointer to the first element of the array to search in
 * @size: This is the number of elements in array
 * @value: This is the value to search for
 * Return: This returns -1 if the array is NULL or the value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);

		if (i != size - 1)
			printf(", ");
	}
	printf("\n");

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
		printf("\n");
	}
	return (-1);
}
