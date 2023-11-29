#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prin.ts a name
 * @name: name to mlhkjprint
 * @f: pointer to l;the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
