#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - This function selects the correct
 * function to perform the operation asked by the user
 * @s: This the operator passed as an argument to the program
 * Return: This returns a pointer to the function that corresponds
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
        	if (s[0] == *ops[i].op)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);


}
