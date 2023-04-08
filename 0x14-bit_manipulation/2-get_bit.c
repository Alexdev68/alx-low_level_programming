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
	char bit[20];
	int i, len = 0, x = 0;
	unsigned int count = 0;

	while (n != 0)
	{
		if (n % 2 == 1)
		{
			bit[len] = '1';
		}
		else
		{
			bit[len] = '0';
		}
		n /= 2;
		len++;
	}
	bit[len] = '\0';
	/*
	for (i = (len - 1); i >= 0; i--, k++)
	{
		bin[k] = bit[i];
	}
	bin[k] = '\0';*/

	for (i = 0; bit[i] != '\0'; i++)
	{
		if (count == index)
		{
			if (bit[i] == '1')
			{
				x += 1;
			}
			else
			{
				x += 0;
			}
		}
		count++;
	}
	if (count < index)
	{
		return (-1);
	}
	return (x);
}
