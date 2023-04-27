#include "main.h"
/**
 * print_to_98 - function prints numbers till 98
 * @n: the input numer given to the function
*/
void print_to_98(int n)
{
	int i;

	if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			if (i / 10 == 0)
				_putchar(i);
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
	}
	else if (n == 98)
	{
		_putchar(9 + 48);
		_putchar(8 + 48);
	}
	else if (n > 98)
	{
		for (i == n; i >= 98; i--)
		{
			if (i / 10 == 0)
				_putchar(i);
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
	}
}
