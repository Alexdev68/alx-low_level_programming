#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int passwrd[100];
	int a, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		passwrd[a] = rand() % 78;
		sum += (passwrd[a] + '0');
		putchar(passwrd[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	putchar('\n');

	return (0);
}
