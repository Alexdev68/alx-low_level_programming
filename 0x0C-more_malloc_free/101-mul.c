#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *s);

/**
 * main - This function multiplies two number
 * @argc: Argument count
 * @argv: Argument vector (pointer)
 * Return: This returns 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	long int num1, num2, mul;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%ld\n", mul);

	return (0);
}

/**
 * _isdigit - This functions checks if a character is a digit
 * @s: This is the string to be checked
 * Return: This returns 1 if is digit or 0 if not
 */
int _isdigit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}
