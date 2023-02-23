#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for a digit from 0 through 9
 * @c: Integer
 * Return: 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
