#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to grid
 * @height: the height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(*(grid + i));
		++i;
	}
	free(grid);
}
