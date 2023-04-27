#include <stdio.h>
#define max 10000000000
/**
 * main - entry point
 * Description: print the 1st 98 fib numbers without using
 * long long, malloc, pointers, arrays/tables, or structures
 * Return: Always 0
*/
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, next;
	unsigned long f1H1, f1H2, f2H1, f2H2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		next = f1 + f2;
		printf("%lu, ", next);
		f1 = f2;
		f2 = next;
	}

	f1H1 = f1 / max;
	f2H2 = f2 / max;
	f1H2 = f1 % max;
	f2H2 = f2 % max;
	for (i = 93; i < 98; i++)
	{
		half1 = f1H1 + f2H1;
		half2 = f1H2 + f2H2;
		if (f1H2 + f2H2 > 9999999999)
		{
			half1 += 1;
			half2 %= max
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		f1H1 = f2H1;
		f2H1 = half1;
		f1H2 = f2H2;
		f2H2 = half2;

	}
	printf("\n");
	return (0);
}
