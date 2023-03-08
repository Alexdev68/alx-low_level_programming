#include "main.h"

/**
 * is_prime_number - This checks if a number is a prime number
 * @n: This is the number being checked
 * Return: This returns 1 if prime number but 0 if not
 */
int is_prime_number(int n)
{
	int prime;

	if (n == 2 || n == 5)
	{
		prime = 1;
	}
	if (n % 2 != 0 || n % 5 != 0)
	{
		prime = 1;
	}
	if (n % 2 == 0 || n % 5 == 0)
	{
		prime = 0;
	}
	if (n == 1)
	{
		prime = 0;
	}
	if (n < 0)
	{
		prime = 0;
	}

	return (prime);
}
