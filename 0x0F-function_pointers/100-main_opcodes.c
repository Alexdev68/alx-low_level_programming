#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints it's own opcodes
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (char *) main;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02hhx ", main_ptr[i]);
	}
	putchar('\n');
	return (0);
}
