#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: the first i/p number
 * @b: the 2nd i/p number
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
