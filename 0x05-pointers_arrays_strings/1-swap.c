#include "main.h"

/**
 * swap_int - This swaps the values of two integers
 *
 * @a: Integer
 * @b: Integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
