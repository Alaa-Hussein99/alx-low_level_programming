#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
*/
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 90; ch++)
		_putchar(ch);
	_putchar('\n');
}
