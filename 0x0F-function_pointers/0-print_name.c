#include <stdlib.h>
#include "function_pointers.h"


/**
 * print_name - print_name write
 * @name: name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

