#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index
 * @n: This is points the number containing the bit that should be set to 0
 * @index: This indicates the position of the bit to be set to 0
 * Return: This returns 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
