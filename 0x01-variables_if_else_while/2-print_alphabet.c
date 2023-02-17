#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int x = '`';

	while (x <= 'z')
	{
		x++;

		putchar(x);
	}
	return (0);
}
