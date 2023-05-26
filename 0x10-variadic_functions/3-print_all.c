#include "variadic_functions.h"
/**
 * form_char - format char
 * @separator: given separator
 * @arg: argument pointer
*/
void form_char(char *separator, va_list arg)
{
	printf("%s%c", separator, va_arg(arg, int));
}

/**
 * form_int - format integer
 * @separator: given separator
 * @arg: argument pointer
*/
void form_int(char *separator, va_list arg)
{
	printf("%s%d", separator, va_arg(arg, int));
}

/**
 * form_float - format float
 * @separator: given separator
 * @arg: argument pointer
*/
void form_float(char *separator, va_list arg)
{
	printf("%s%f", separator, va_arg(arg, double));
}

/**
 * form_str - format string
 * @separator: given separator
 * @arg: argument pointer
*/
void form_str(char *separator, va_list arg)
{
	char *str = va_arg(arg, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything in any format
 * @format: the format used to print
 * @...: given input
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	char *separator = "";
	va_list arg;
	token_t tokens[] = {
		{"c", form_char},
		{"i", form_int},
		{"f", form_float},
		{"s", form_str},
		{NULL, NULL}
	};

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
