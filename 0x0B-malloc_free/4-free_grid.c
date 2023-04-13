#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: pointer of the grid
 * @height: the height of the created grid
 *
 * Return: Always Success 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);

	return (0);
}
