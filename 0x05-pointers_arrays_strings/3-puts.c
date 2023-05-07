#include "main.h"
/**
 * _puts - takes str and prints it
 * @str: the i/p string
*/
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
