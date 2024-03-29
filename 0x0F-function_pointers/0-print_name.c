#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *f != NULL)
	{
		(*f)(name);
	}
}
