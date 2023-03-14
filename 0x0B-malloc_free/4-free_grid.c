#include "main.h"

/**
 * free_grid - free_grid write
 * @grid: take
 * @height: hright
 * Return: 1
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
