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
	char *g, *separator = ", ";
	va_list args;

	va_start(args, format);

	while (i < n)
	{
		if (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					g = va_arg(args, char *);
					if (g == NULL)
					{
						g = "(nil)";
					}
					printf("%s", g);
					break;
				default:
					i++;
					continue;
			}
		}
		printf("%s", (i < (n - 1)) ? separator : "");
		i++;
	}
	putchar ('\n');

	va_end(args);
}
