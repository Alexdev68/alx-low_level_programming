#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int x = '`';

	while (x <= 'y')
	{
		x++;

		putchar(x);
	}

	putchar('\n');
	return (0);
}
