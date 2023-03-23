#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all its parameters
 * @n: This is the number of args to be passed
 * Return: This returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int x, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);

	return (sum);
}
