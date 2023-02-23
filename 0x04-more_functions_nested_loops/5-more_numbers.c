#include "main.h"

/**
 * more_numbers - This prints 10 time the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b > 9 ? (b / 10) + '0' : b + '0');
			if (b >= 10)
			{
				_putchar((b % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
