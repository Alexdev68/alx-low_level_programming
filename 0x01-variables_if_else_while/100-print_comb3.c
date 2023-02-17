#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, f;
	
	for (x = 0; x <= 8; x++)
	{
		for (f = x + 1; f <= 9; f++)
		{
			if (x != f && f != x)
			{
				putchar('0' + x);
				putchar('0' + f);

				if (x + f < 17)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
