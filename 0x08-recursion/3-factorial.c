#include "main.h"
/**
 * factorial - prints fact of a number
 * @n: the input number
 * Return: -1 if n < 0, 1 if n == 0
 * then returns the factorial of the give number
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
