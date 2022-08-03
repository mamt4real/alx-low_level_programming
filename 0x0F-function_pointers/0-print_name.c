#include "function_pointers.h"

/**
 * print_name - prints a name using f
 * @name: pointer to name
 * @f: function to print name with
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
