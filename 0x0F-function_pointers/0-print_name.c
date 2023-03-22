#include "function_pointers.h"

/**
 * print_name - This prints a name
 * @name: This is the name to be printed
 * @f: This is a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
