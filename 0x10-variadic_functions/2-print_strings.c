#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - This function prints strings
 * @separator: This is the string to be printed between the strings
 * @n: This is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(args);
}
