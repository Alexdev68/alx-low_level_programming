#include "main.h"

/**
 * set_string - This sets the value of a pointer to a char
 * @s: Pointer that points to a pointer
 * @to: Pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
