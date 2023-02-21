#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checking for letter, lowercase or uppercase
 * @c: Int declaration
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
