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
		if (i < 50)
		{
			printf("%ld, ", next);
			t1 = t2;
			t2 = next;
			next = t1 + t2;
		}
		else
		{
			t1 = t2;
			t2 = next;
			next = t1 + t2;
			printf("%ld\n", next);
		}
	}
	return (0);
}
