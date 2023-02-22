#include <stdio.h>

/**
 * main - Adds even numbers of fibonacci sequence less than 4000000
 * Return: Always 0
 */
int main(void)
{
	int p = 0;

	long v1 = 1, v2 = 2, sum = v2;

	while (v1 + v2 < 4000000)
	{
		v2 += v1;
		if (v2 % 2 == 0)
		{
			sum += v2;
			v1 = v2 - v1;
			++p;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
