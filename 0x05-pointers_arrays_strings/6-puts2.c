#include "main.h"
/**
 * puts2 - function that prints every other character
 * starting with 1st character, followed by a newline
 * @str: the input string
*/
void puts2(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	for (n = 0; n < i; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
