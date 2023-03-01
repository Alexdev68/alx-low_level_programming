#include "main.h"
#include <string.h>

/**
 * *_strncpy - This copies a string
 * @dest: This the destination of the copied file
 * @src: This is the source of the copied file
 * @n: This is the amount that should copied
 * Return: p
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p;

	strncpy(dest, src, n);
	p = dest;

	return (p);
}
