#include "main.h"

int countflipped(unsigned long int n);

/**
 * flip_bits - This function returns the number of bits flipped
 * @n: This is the first number
 * @m: This is the second number
 * Return: This returns the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countflipped(n ^ m));
}

int countflipped(unsigned long int n)
{
	int count = 0;

	while (n != 0)
	{
		n &= (n - 1);
		count++;
	}
	return (count);
}
