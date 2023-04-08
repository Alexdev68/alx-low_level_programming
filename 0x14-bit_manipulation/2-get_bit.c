#include "main.h"
#include <stdio.h>

/**
 * get_bit - This function returns the value of a bit at a given index
 * @n: This is the number to be checked for the bit
 * @index: This is the position of the bit
 * Return: This returns the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int long) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
