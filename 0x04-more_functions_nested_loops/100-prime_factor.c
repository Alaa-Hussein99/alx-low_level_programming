#include <stdio.h>
/**
 * _sqrt - calculates the sqyare root of a number and returns it
 * @num: the input number
 * Return: the square root of a number
*/
double _sqrt(double num)
{
	float sqrt, tmp;

	tmp = 0;
	sqrt = num / 2;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (num / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 * largest_pf - gets the largest prime factor
 * @num: the unput number
 * Return: returns the largest prime factor
*/
int largest_pf(long int num)
{
	int prime, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (prime = 3; prime <= _sqrt(num); prime += 2)
	{
		num = num / prime;
		largest = prime;
	}
	if (num > 2)
		largest = num;
	return (largest);
}
/**
 * main - entry point
 * Return: Always 0
*/
int main(void)
{
	int l;

	l = largest_pf(612852475143);
	printf("%d\n", l);
	return (0);
}
