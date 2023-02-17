#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int f;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	for (f = 'a'; f <= 'f'; f++)
	{
		putchar(f);
	}

	putchar('\n');
	return (0);
}
