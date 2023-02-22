#include "main.h"

/**
 * print_times_table - Print time tables ranging from 0 - 15
 * @n: Integer
 * Return: Nothing
 */
void print_times_table(int n)
{
	int no1, no2, result;

	if (n >= 0 && n <= 15)
	{
		for (no1 = 0; no1 <= n; no1++)
		{
			_putchar('0');
			for (no2 = 1; no2 <= n; no2++)
			{
				_putchar(',');
				_putchar(' ');
				result = no1 * no2;
				if (result <= 99)
				{
					_putchar (' ');
				}
				if (result <= 9)
				{
					_putchar (' ');
				}
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
