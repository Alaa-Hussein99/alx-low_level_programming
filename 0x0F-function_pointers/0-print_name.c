#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the string passed
 * @f: the pointer to function that will print
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
