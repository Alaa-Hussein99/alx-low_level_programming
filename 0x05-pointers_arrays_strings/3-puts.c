#include "main.h"
/**
 * _puts - takes str and prints it
 * @str: the i/p string
*/
void _puts(char *str)
{
	int n, i;

	while (str[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
