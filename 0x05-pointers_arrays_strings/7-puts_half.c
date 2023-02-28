#include "main.h"

/**
 * puts_half - This thr second half of a string
 * @str: Character
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, a;

	while (*str)
	{
		str++;
		len++;
	}
	for (a = 0; a < len; a++)
	{
		str--;
	}
	a = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
	for (; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
