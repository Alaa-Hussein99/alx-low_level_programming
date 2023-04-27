#include "main.h"
/**
 * print_times_table - prints the times table for a given n
 * ranges between 0 and 15 inclusive
 * @n: the input number (0-15) inclusive
*/
void print_times_table(int n)
{
	int i, j, t;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				_putchar(',');
				_putchar(' ');
				if (t < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((t % 10) + 48);
				}
				else if (t >= 10 && t  < 100)
				{
					_putchar(' ');
					_putchar((t / 10) + 48);
					_putchar((t % 10) + 48);
				}
				else
				{
					_putchar((t / 100) + 48);
					_putchar(((t / 10) % 10) + 48);
					_putchar((t % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
