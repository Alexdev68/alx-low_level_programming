#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - This function finds the sum of two numbers
 * @a: First number
 * @b: second number
 * Return: Operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function finds the difference between two numbers
 * @a: First number
 * @b: second number
 * Return: Operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function finds the multiplication of two numbers
 * @a: First number
 * @b: second number
 * Return: Operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function divides the first number by the second number
 * @a: First number
 * @b: second number
 * Return: Operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This function finds the modulo of two number
 * @a: First number
 * @b: second number
 * Return: Operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
