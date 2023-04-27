#include "main.h"
/**
 * print_sign - checks if the number is +ve, -ve or 0
 * @n: the input number to be chacked
 * Return: 1 if +ve number, -1 if -ve number, 0 if 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
	{
		printf("-, ");
		return (-1);
	}
}
