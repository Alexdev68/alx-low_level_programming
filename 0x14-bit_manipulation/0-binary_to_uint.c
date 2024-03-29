#include "main.h"
#include <string.h>
#include <limits.h>

/**
 * binary_to_uint - This function converts a binary number to an unsign int
 * @b: This is the binary to be converted unsigned int
 * Return: This returns the converted number, or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot = 0, calc = 1, len;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			tot += calc;
		}
		calc *= 2;
	}
	return (tot);
}
