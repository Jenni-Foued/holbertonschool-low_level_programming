#include "function_pointers.h"

/**
 * print_name - Calls another function to print name (uppercase or lowercase)
 * @name: String address.
 * @f: Function address.
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
