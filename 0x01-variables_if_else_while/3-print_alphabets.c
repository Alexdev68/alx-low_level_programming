#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';
	char f = 'A';

	while (x <= 'z')
	{
		putchar(x);

		x++;
	}

	while (f <= 'Z')
	{
		putchar(f);

		f++;
	}

	putchar('\n');
	return (0);
}
