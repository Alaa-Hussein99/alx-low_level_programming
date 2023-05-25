#include "function_pointers.h"
/**
 * array_iterator - iterates an array through a func pointer
 * @array: the input array
 * @size: the array size
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
