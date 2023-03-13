#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: grid
 * @height: grid's height
 *
 * Note that we will compile with your alloc_grid.c file. Make sure it compiles
 */

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
