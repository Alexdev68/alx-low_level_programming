#include "main.h"
#include <stdio.h>

/**
 * get_endianness - This function checks the endianness
 * Return: This returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int val = 0x1;
	char *r = (char *) &val;

	if (*r == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
