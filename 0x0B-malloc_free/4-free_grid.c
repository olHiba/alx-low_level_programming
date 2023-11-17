#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a two dimensional
 * @grid: the address of the two dimensional array
 * @height: height of the grid
 * Return: void
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
