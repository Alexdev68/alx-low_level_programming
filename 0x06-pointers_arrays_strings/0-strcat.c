#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat - This is used to concatenate two strings
 * @dest: This is the destination of the concatenation
 * @src: This is the source of the concatenation
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	strcat(dest, src);
	p = dest;


	return (p);
}
