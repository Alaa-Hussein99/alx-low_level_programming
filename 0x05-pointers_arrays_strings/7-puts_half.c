#include "main.h"
/**
 * puts_half - prints the second half of a string, followed by a newline
 * @str: the input string
*/
void puts_half(char *str)
{
	int i = 0;
	int n, k;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		n = i / 2;
		for (k = n; k < i; k++)
			_putchar(str[k]);
		_putchar('\n');
	}
	else
	{
		n = (i - 1) / 2;
		for (k = n; k < i - 1; k++)
			_putchar(str[k + 1]);
		_putchar('\n');
	}
}
