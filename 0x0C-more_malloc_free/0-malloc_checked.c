#include "main.h"
/**
 * *malloc_checked - allocates memory and exits if failed
 * @b: int
 * Return: pointer to array init
*/
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
