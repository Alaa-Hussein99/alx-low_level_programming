#include <stdio.h>
/**
 * main - Entry point
 * Description: prints characters from a to z
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'a';

	while (ch >= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
}
