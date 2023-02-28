#include "main.h"

/**
 * *_strcpy - This copies the string pointed to by src
 * @dest: Destination of copied string
 * @src: Source of copied string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	while (*src)
	{
		src++;
		len++;
	}
	for (a = 0; a < len; a++)
	{
		src--;
	}
	for (a = 0; a < len; a++)
	{
		dest[a] = *src;
		src++;
	}
	dest[a] = *src;

	return (dest);
}
