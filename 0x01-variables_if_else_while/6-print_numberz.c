#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers from 0 to 9 using putchar
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
