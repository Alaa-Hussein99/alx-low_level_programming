#include <stdio.h>
/**
 * main - entry point
 * Description: prints the sum of the even numbers in fibonacci
 * Return: Always 0
*/
int main(void)
{
	long int f1 = 0;
	long int f2 = 1;
	long int next = t1 + t2;
	long int sum = 0;

	while (1)
	{
		if (next > 4000000)
			break;
		if ((next % 2) == 0)
		{
			sum = sum + next;
		}
		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	printf("ld\n", sum);
	return (0);
}
