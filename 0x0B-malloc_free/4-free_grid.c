#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This frees a 2 dimensional grid
 * @grid: This is a double pointer
 * @height: This represents columns
 * Return: Nothing
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
