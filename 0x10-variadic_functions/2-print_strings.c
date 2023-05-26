#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: character seperator to be used
 * @n: number of arguments
 * @...: arguments to be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		printf("%s", str != NULL ? str : "(nil)");
		if (i < (n - 1) && seperator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
