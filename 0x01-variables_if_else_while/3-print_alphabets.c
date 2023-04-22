#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets from a to z and A to Z
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a', ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
