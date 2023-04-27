#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case followed by a new line
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}
