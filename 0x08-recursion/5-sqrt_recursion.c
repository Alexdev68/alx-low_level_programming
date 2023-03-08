#include "main.h"

int square_root(int val, int root);

/**
 * _sqrt_recursion - This returns the natural square root of a number
 * @n: Number to be square rooted
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(1, n));
}

/**
 * square_root - This checks for and finds natural square root
 * @val: This is the value used to iterate through each number until
 * the condition is settled
 * @root: This is the number that we were asked to find the square root of
 * Return: This returns the value of the square root
 */
int square_root(int val, int root)
{
	if (val * val == root)
	{
		return (val);
	}
	if (val == root)
	{
		return (-1);
	}
	return (1 * square_root(val + 1, root));
}
