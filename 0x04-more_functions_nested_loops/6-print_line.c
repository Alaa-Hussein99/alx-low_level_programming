#include "main.h"
/**
 * print_line - prints a line followed by a line
 * @n: first input to determine the length of the line
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
