#include <stdlib.h>

/**
 * free_grid - free the grid.
 * @grid: grid of memories.
 * @height: array.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
