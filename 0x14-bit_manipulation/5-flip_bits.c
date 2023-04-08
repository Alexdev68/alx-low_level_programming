#include "main.h"

/**
 * flip_bits - This function returns the number of bits flipped
 * @n: This is the first number
 * @m: This is the second number
 * Return: This returns the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (__builtin_popcount(n ^ m));
}
