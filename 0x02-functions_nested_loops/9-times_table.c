#include "main.h"
/**
 * times_table - prints the times table from 0 to 9
*/
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48)
		for (j = 1; j <= 9; j++)
		{
			t = i * j;
			_putchar(',');
			_putchar(' ');
			if (t < 10)
				_putchar(' ');
			else
				_putchar((t / 10) + 48);
			_putchar((t % 10) + 48);
			}
		}
			_putchar('\n');
	}
}
