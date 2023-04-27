#include "main.h"
/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: the input to perform operations on
 * Return: the last digit
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = -1 * last;
	_putchar('0' + last);
	return (last);
}
