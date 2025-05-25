#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid previously created by alloc_grid
 * @grid: pointer to the grid to free
 * @height: height of the grid (number of rows)
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
