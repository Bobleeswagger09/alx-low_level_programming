#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function to free a 2 d array that
 * was created on alloc_grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
