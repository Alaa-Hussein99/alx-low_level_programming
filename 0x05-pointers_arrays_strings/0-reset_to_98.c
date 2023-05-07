#include "main.h"
/**
 * reset_to_98 - function that always prints 98 regardless of i/p
 * @n: input pointer 
*/
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
	_putchar(*p / 10);
	_putchar(*p % 10);
}
