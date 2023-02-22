#include <stdio.h>

/**
 * main - Print multles of 3 and 5 till 1024
 * Return: 0
 */
int main(void)
{
	int a, b;

	b = 0;
	for (; a <= 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
