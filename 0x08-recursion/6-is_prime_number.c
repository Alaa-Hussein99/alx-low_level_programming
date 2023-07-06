#include "main.h"
/**
 * check - if the no is prime
 * @n: 1st i/p
 * @m: 2nd i/p
 * Return: int
*/
int check(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check(n, m + 1));
}
/**
 * is_prime_number - use check
 * @n: 1st i/p
 * Return: int
*/
int is_prime_number(int n)
{
	return (check(n, 2));
}
