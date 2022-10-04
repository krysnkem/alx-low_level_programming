#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return:  pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **m_array;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);
	m_array = malloc(sizeof(*m_array) * height);
	if (m_array == NULL)
	{
		free(m_array);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		*(m_array + i) = malloc(sizeof(**(m_array + i)) * width);
		if (*(m_array + i) == NULL)
			break;
		++i;
	}
	if (*(m_array + i) == NULL)
	{
		while (i > 0)
		{
			free(*(m_array + i));
			--i;
		}
		return (NULL);
	}


	i = 0;
	while (i < height)
	{
		n = 0;
		while (n < width)
		{
			*(*(m_array + i) + n) = 0;
			++n;
		}
		++i;
	}
	return (m_array);
}
