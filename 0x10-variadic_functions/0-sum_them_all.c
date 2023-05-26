#include "variadic_functions.h"
/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 * Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	int i = n;
	va_list arg;

	if (!n)
		return (0);
	va_start(arg, n);
	while (i--)
		s = s + va_arg(arg, int);
	va_end(arg);
	return (s);
}
