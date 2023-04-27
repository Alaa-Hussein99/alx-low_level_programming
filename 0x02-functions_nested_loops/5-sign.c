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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
