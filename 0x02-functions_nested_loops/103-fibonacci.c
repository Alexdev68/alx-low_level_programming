#include <stdio.h>

/**
 * main - Adds even numbers of fibonacci sequence less than 4000000
 * Return: Always 0
 */
int main(void)
{
	int p;

	int v1 = 1, v2 = 2, sum = v2;

	for (p = 0; v1 + v2 < 4000000; p++)
	{
		v2 += v1;
		if (v2 % 2 == 0)
		{
			sum += v2;
			v1 = v2 - v1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
