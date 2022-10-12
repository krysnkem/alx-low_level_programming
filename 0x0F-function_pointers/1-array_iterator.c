#include "function_pointers.h"
/**
 * array_iterator - executesa function given as a parameter
 * on each element of an array
 * @array: the input array
 * @size: the size of the input array
 * @action: the callback function to be executed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action != NULL && size > 0
			&& array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
