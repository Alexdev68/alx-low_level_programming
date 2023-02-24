#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long int n;
	long int div = 2, largestfactor;

	for (n = 612852475143; n != 0;)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			largestfactor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld", largestfactor);
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
