#include <stdio.h>
/**
 * main - entry point
 * Description: function that prints the first 50 numbers of fibonacci series
 * Return: Always 0
*/
int main(void)
{
	long int t1 = 1;
	long int t2 = 2;
	long int next = t1 + t2;
	int i;

	printf("%ld, %ld, ", t1, t2);
	for (i = 3; i <= 50; i++)
	{
		printf("%ld", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		if (i < 50)
			printf(", ");
		else
			printf("\n");

	}
	return (0);
}
