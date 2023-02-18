#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, f, g;

	for (x = 0; x < 8; x++)
	{
		for (f = x + 1; f < 9; f++)
		{
			for (g = f + 1; g < 10; g++)
			{
				if (x != f && x != g && f != g)
				{
					putchar('0' + x);
					putchar('0' + f);
					putchar('0' + g);

					if (x + f + g < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
