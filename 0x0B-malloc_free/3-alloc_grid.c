#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
	int **tab, x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		tap[x] = malloc(sizeof(int) * width);

		if (tab[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(tab[x]);
			}
			free(tab);
			return (NULL);
		}

		for (y = 0; y <= width; y++)
		{
			tab[x][y] = 0;
		}
	}
	return (tab);

}