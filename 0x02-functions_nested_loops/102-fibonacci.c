#include <stdio.h>
/**
 * main - entry point
 * Description: function that prints the first 50 numbers of fibonacci series
 * Return: Always 0
*/
int main(void)
{
	int t1 = 1;
	int t2 = 2;
	int next = t1 + t2;
	int i;

	printf("%d, %d, ", t1, t2);
	for (i = 3; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%d, ", next);
			t1 = t2;
			t2 = next;
			next = t1 + t2;
		}
		else 
		{
			t1 = t2;
			t2 = next;
			next = t1 + t2;	
			printf("%d\n", next);
		}
	}
	return (0);
}
