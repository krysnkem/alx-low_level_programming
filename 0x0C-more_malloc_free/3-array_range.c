#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value;
 * @max: maximum value;
 *
 * Return: the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *int_arr;
	int i, range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	int_arr = malloc(sizeof(int) * range);
	if (int_arr == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{	
		*(int_arr + i) = min++;
		++i;
	}
	return (int_arr);
}
