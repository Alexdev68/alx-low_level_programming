#include "main.h"
#include <string.h>

/**
 * *_strncat - This is used to concatenate two strings
 * @dest: This is the destination of the concatenation
 * @src: This is the source of the concatenation
 * @n: This is used to set the amount that should be concatenated
 * Return: P
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	strncat(dest, src, n);
	p = dest;

	return (p);
}
