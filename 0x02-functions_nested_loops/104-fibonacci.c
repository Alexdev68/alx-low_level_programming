#include <stdio.h>

/**
 * main - print the firrst 50 fibonacci numbers
 * Return: Always (0)
 */
int main(void)
{
	int p;

	unsigned long v1 = 1, v2 = 2;

	(p = 0; p < 98; p++)
	{
		if (p == 0)
		{
			printf("%lu", v1);
		}
		else if (p == 1)
		{
			printf(", %lu", v2);
		}
		else
		{
			v2 += v1;
			v1 = v2 - v1;
			printf(", %lu", v2);
		}
	}
	putchar('\n');
	return (0);
}
