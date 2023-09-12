#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - This function implements the interpolation search
 * algorithm
 * @array: This  is a pointer to the first element of the array to search in
 * @size: This is the number of elements in array
 * @value: This is the value to search for
 * Return: This returns the first index where value is located or -1 if the
 * array is NULL or the value is not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, h = size - 1, l = 0;

	if (array == NULL)
		return (-1);

	pos = l + (((double)(h - l) /
				(array[h] - array[l])) * (value - array[l]));
	if (pos > size - 1)
		printf("Value checked array[%ld] is out of range\n", pos);

	while (l <= h && array[l] <= value && array[h] >= value)
	{
		if (l == h)
		{
			if (array[h] == value)
			{
				return (h);
			}
			else
				return (-1);
		}
		pos = l + (((double)(h - l) /
					(array[h] - array[l])) * (value - array[l]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			l = pos + 1;
		}
		else
			h = pos - 1;
	}
	return (-1);
}
