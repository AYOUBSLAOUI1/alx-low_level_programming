#include <stdlib.h>

/**
 * free_grid - alloc_grid.
 * @grid: grid of memories.
 * @height: array.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
