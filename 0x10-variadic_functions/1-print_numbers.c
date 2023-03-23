#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - This function prints numbers
 * @separator: This is the string to be printed between numbers
 * @n: This is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	int x;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = " ";
	}

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		printf("%d", x);

		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(args);
}
