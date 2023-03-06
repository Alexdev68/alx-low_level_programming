#include "main.h"
#include <stddef.h>

/**
 * *_memset - This fills a memory with a constant byte
 * @s: Pointer
 * @b: This is the constant byte
 * @n: This is the number of bytes that should be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
