#include "function_pointers.h"

/**
 * int_index - This fuinction searches for an integer
 * @array: This is an array of integers
 * @size: This is the size of the array
 * @cmp: This compares integers
 * Return: This  returns the index of the first element for
 * which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (*cmp == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (0);
}
