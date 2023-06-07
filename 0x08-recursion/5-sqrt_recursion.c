#include "main.h"

int sq(int n, int m);
/**
 * _sqrt_recursion - prints square root
 * @n: the number
 * Return: the o/p from sq function
*/
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
/**
 * sq - calculates the sqyare root
 * @n: number
 * @m: the square root
 * Return: int
*/
int sq(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (sq(n, m + 1));
	else
		return (-1);
}
