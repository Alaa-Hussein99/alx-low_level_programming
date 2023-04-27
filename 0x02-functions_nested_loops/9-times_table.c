#include "main.h"
/**
 * times_table - prints the times table from 0 to 9
*/
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = i * j;
			if (t < 10)
			{
				_putchar(t + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((t / 10) + 48);
				_putchar((t % 10) + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
			_putchar('\n');
	}
}
