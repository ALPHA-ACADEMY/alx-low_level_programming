#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that free a 2d array of integer.
 * @grid: The 2d array?
 * @height: The height of grid.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
