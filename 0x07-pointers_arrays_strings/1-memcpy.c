#include "main.h"

/**
 * *_memcpy - This copies memory area
 * @dest: This is destination of the copied data
 * @src: This is the source of the copied data
 * @n: This is the number of bytes to be copied
 * Return: dest[i]
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
