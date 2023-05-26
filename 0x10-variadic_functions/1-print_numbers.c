#include "variadic_functions.h"
/**
 * print_numbers - prits the given numbers
 * @separator: the separator character
 * @n: the the number of arguments
 * @...: the integers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int v;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(arg, int);
		printf("%d", v);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
