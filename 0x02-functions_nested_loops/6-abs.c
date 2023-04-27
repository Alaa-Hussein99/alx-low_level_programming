#include "main.h"
/**
 * _abs - returns the absolute of a number
 * @n: is the input taken to check
 * Return: n if +v, 0 if 0, -1*n if n is -ve
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-1 * n);
}
