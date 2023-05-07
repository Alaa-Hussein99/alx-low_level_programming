#include "main.h"
/**
 * _puts - takes str and prints it
 * @str: the i/p string
*/
void _puts(char *str)
{
	int n;

	n = _strlen(*str);
	write(1, *str, n);
}
