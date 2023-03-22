#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - This function executes a function given as a
 * parameter on each element of an array
 * @array: This is an array of integers
 * @size: This is an unsigned int
 * @action: This is a function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
