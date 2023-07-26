#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function entry-point
 *
 * Description: frees a 2D grid previously allocated
 * @grid: 2D grid
 * @height: rows of grid
 * Return:  void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
