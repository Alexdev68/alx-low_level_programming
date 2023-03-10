#include <stdio.h>

/**
 * main - This prints it name
 * @argc: This is the agrgument count
 * @argv: This is the argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
