#include "main.h"

/**
 * _abs - Entry point
 * @c: integer
 * Return: 1
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_call = c * -1;

		return (abs_call);
	}
	return (c);
}
