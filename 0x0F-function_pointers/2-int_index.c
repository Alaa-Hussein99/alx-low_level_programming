#include "function_pointers.h"
/**
 * int_index - returns the index of the 1st element
 * @array: the input array
 * @size: the size of the array
 * @cmp: the function to pointer
 * Return: returns the index, otherwise returns -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
