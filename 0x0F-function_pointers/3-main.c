#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(op)(num1, num2);

	printf("%d\n", res);

	return (0);
}
