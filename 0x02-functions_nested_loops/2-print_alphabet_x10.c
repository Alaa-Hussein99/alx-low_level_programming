#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lower case
 * 10 times followed by a new line
 * Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	return (0);
}
