#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, f, g;
	int x3, f3, g3;

	for (x = 0; x <= 98; x++)
	{
		f = ('0' + x / 10);
		g = ('0' + x % 10);

		for (x3 = 0; x3 <= 99; x3++)
		{
			f3 = ('0' + x3 / 10);
			g3 = ('0' + x3 % 10);

			if (x < x3)
			{
				putchar(f);
				putchar(g);
				putchar(' ');
				putchar(f3);
				putchar(g3);

				if (x != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
