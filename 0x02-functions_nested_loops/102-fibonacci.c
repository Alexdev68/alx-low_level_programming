#include <stdio.h>

/**
 * main - print the firrst 50 fibonacci numbers
 * Return: Always (0)
 */
int main(void)
{
	int p, q;

	int v1 = 0, v2 = 1;

	int nextvalue = v1 + v2;

	q = 50;

	printf("Fibonacci number: %d, %d, ", v1, v2);

	for (p = 3; p <= q; p++)
	{
		printf("%d, ", nextvalue);
		v1 = v2;
		v2 = nextvalue;
		nextvalue = v1 + v2;
	}
	putchar('\n');
	return (0);
}
