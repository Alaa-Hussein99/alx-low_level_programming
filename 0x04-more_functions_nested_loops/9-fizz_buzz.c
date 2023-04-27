#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the numbers, if multiple of 3 prints Fizz
 * if multiple of 5 prits Buzz, if multiple of both prints FizzBuzz
 * otherwise print the numbers
 * Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
