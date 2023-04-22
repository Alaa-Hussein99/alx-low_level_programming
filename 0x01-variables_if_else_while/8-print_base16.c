#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers of base 16
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;
	char ch = 'a';

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	while (ch <= 'f')
	{
		putcahr(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
