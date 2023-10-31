#include "main.h"

/**
	* free_grid - free memory previously allocated
	* @grid: pointer to teh array
	* @height: number of rowsa
	*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
