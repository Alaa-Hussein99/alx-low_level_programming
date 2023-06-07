#include "main.h"
/**
 * _pow_recursion - prints the power of a no
 * @x: the number
 * @y: the power
 * Return: the power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
