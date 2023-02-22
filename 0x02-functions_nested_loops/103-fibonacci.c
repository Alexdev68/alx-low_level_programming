#include <stdio.h>

/**
 * main - Adds even numbers of fibonacci sequence less than 4000000
 * Return: Always 0
 */
int main(void)
{
	int p = 0;
	int v1 = 1, v2 = 0, sum = 0;

	while (v2 < 4000000)
	{
		v2 = p + v1;
		p = v1;
		v1 = v2;
		if (v2 % 2 == 0)
		{
			sum += v2;
		}
	}
	printf("%d\n", sum);
	return (0);
}
