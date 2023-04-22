#include <stdio.h>
/**
 * main - Entry point
 * Description: prints didigt from 0 to 9
 * Return: Alwas 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
