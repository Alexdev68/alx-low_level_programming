#include "main.h"
int palinchecker(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - This checks if a string is a palindrome
 * @s: This is the string to be checked
 * Return: This returns 1 if it is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (palinchecker(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - This returns the length of a string
 * @s: This is the string whose length is gonna be checked
 *Return: This returns string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palinchecker - This checks for palindrome
 * @s: This is the string to be checked
 * @i: This is used iterate through the string
 * @len: this is the length of the string
 *Return: This returns 1 if palindrome or 0 if not
 */
int palinchecker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (palinchecker(s, i + 1, len - 1));
}
