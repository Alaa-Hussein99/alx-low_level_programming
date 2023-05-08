#include "main.h"
/**
 * puts_half - prints the second half of a string, followed by a newline
 * @str: the input string
*/
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		n = i / 2;
		for (n; n < i; n--)
			_putchar(str[n]);
		_putchar('\n');
	}
	else
	{
		n = (i - 1) / 2;
		for (n; n < i; n--)
			_putchar(str[n]);
		_putchar('\n');
	}
}
