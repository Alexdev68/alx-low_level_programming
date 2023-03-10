#include <stdio.h>

/**
 * main - This prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	argc -= 1;
	(void)*argv;

	printf("%d\n", argc);

	return (0);
}
