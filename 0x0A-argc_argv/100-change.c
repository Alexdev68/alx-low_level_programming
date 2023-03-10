#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints the minimum number of coins to make change
 * for an amount of money
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mny, i, amount = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)

	{
		printf("Error\n");

		return (1);
	}

	mny = atoi(argv[1]);

	if (mny < 0)

	{
		printf("0\n");

		return (0);
	}

	for (i = 0; i < 5 && mny >= 0; i++)

	{
		while (mny >= coins[i])

		{
			amount++;

			mny -= coins[i];
		}
	}
	printf("%d\n", amount);

	return (0);
}
