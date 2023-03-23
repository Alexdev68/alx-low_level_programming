#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - This function prints anything
 * @format: This  is a list of types of arguments passed
 * to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, n = strlen(format);

	va_list args;

	va_start(args, format);

	while (i < n)
	{
		if (format[i] == 'c')
		{
			int g = va_arg(args, int);
			printf("%c, ", g);
		}
		else if (format[i] == 'i')
		{
			int g = va_arg(args, int);
			printf("%d, ", g);
		}
		else if (format[i] == 'f')
		{
			double g = va_arg(args, double);
			printf("%f, ", g);
		}
		else if (format[i] == 's')
		{
			char *g = va_arg(args, char *);
			if (g == NULL)
			{
				g = ("(nil)");
			}
			printf("%s, ", g);
		}
		i++;
	}
	putchar ('\n');

	va_end(args);
}
