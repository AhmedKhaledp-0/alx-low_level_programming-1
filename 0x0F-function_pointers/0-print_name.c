#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the string to be printed
 * @f: array of pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
