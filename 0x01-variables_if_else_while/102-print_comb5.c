#include <stdio.h>
/**
 * main - Entry point
 * Description: prints combination of two numbers, from 0 till 99 will have 00
 * before it then will start again but have 11 ... and so on till 99
 * but there is a condition, that 00 01 are the same combination as 01 00
 * so it should be skipped
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98 && j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
