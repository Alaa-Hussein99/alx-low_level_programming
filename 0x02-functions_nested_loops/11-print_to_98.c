#include "main.h"
/**
 * print_to_98 - function prints numbers till 98
 * @n: the input numer given to the function
*/
void print_to_98(int n)
{
	int i;

	if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n < 98)
				printf(", ");
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (n > 98)
				printf(", ");
		}
	}
}
