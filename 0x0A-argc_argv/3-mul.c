#include <stdio.h>
#include <stdlib.h>

/**
 * main - This multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);

	return (0);
}
