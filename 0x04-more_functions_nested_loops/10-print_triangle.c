#include "main.h"
/**
 * print_triangle - prints mirrored right triangle if size > 0
 * if size <= 0 it will print new line
 * @size: the size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - i - 1))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		printf("\n");
}
