#include <stdio.h>
/**
 * main - Entry point
 * Description: prints combination
 * Return: 0 (Success)
*/
int main(void)
{
	int digit = 9;
	int i, j, z;

	for (i = 0; i < digit; i++)
	{
		for (j = i + 1; j <= digit; j++)
		{
			for (z = j + 1; z <= digit; z++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(z + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
