#include "search_algos.h"
#include <stdio.h>

int min(int a, int b);

/**
 * exponential_search - This function implements the exponential search
 * algorithm
 * @array: This  is a pointer to the first element of the array to search in
 * @size: This is the number of elements in array
 * @value: This is the value to search for
 * Return: This returns the first index where value is located or -1 if the
 * array is NULL or the value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t left, right, j;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = min(i, size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");

		for (j = left; j <= right; j++)
		{
			printf("%d", array[j]);

			if (j != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * min - This function gets the minimum between two values
 * @a: This is the first value
 * @b: This is the second value
 * Return: This returns the minimum value
 */
int min(int a, int b)
{
	if (a > b)
	{
		return (b);
	}
	else
	{
		return (a);
	}
}
