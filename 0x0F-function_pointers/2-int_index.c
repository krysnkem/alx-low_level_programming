#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched in
 * @size: size of the array
 * @cmp: pointer to callback
 *
 * Return: index of found integer of -1 (failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
