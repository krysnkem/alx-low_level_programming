#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return:  pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **num_array;
	int i, j, failed;

	failed = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	num_array = malloc(sizeof(*num_array) * height);
	if (num_array == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		*(num_array + i) = malloc(sizeof(**num_array) * width);
		if (*(num_array + i) == NULL)
		{
			failed = 1;
			break;
		}
		++i;
	}
	if (failed == 1)
	{
		while (i >= 0)
		{
			free(*(num_array + i));
			--i;
		}
		free(num_array);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
			*(*(num_array + i) + j++) = 0;
		++i;
	}
	return (num_array);
}
