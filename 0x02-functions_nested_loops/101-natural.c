#include <stdio.h>
/**
 * main - entry point
 * Description: function that prints the multiples of 3 or 5
 * Return: Always 0
*/
int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
