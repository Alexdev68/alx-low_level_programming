#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - This function implements the Linear search algorithm
 * @array: This  is a pointer to the first element of the array to search in
 * @size: This is the number of elements in array
 * @value: This is the value to search for
 * Return: This returns the first index where value is located or -1 if the
 * array is NULL or the value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	char formatted[40];

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		sprintf(formatted, "Value checked array[%ld] = [%d]", i, array[i]);
		puts(formatted);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
