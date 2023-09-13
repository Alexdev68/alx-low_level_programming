#include "search_algos.h"
#include <stdio.h>

int advanced(int *array, size_t right, size_t left, int value);

/**
 * advanced_binary - This function implements the advanced binary search
 * algorithm
 * @array: This  is a pointer to the first element of the array to search in
 * @size: This is the number of elements in array
 * @value: This is the value to search for
 * Return: This returns the first index where value is located or -1 if the
 * array is NULL or the value is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced(array, size - 1, 0, value));
}

/**
 * advanced - This is a helper function
 * @array: This is the sorted array to be searched
 * @right: This is the end of the array
 * @left: This is the start of the array
 * @value: This is the value to search for
 * Return: This returns the first index where value is located or -1 if the
 * array is NULL or the value is not found
 */
int advanced(int *array, size_t right, size_t left, int value)
{
	size_t i;

	if (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] < value)
			return (advanced(array, right, mid + 1, value));
		else if (array[mid] > value || 
				(array[mid] == value && array[mid - 1] == value))
			return (advanced(array, mid, left, value));
		else if (array[mid] == value)
		{
			return (mid);
		}
	}

	return (-1);
}
